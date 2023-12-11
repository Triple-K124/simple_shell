#include "shell.h"

/**
 * executor - Executes the command with arguments.
 * @arg: Array of strings containing command and its arguments.
 *
 * Return: Exit status of executed command
 */

int executor(char **arg)
{
	pid_t id;
	int stat = 0;
	char *command_path, *envp[2];

	if (arg == NULL || *arg == NULL)
		return (stat);
	if (builtin_checker(arg))
		return (stat);
	id = fork();
	if (id < 0)
	{
		_puterror("fork");
		return (1);
	}

	if (id == -1)
		perror(arg[0]), free_array_tokens(arg), free_old_input();
	if (id == 0)
	{
		envp[0] = path_getter();
		envp[1] = NULL;
		command_path = NULL;
		if (arg[0][0] != '/')
			command_path = path_finder(arg[0]);
		if (command_path == NULL)
			command_path = arg[0];

		if (execve(command_path, arg, envp) == -1)
		{
			perror(arg[0]), free_array_tokens(arg), free_old_input();
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		do {
			waitpid(id, &stat, WUNTRACED);
		} while (!WIFEXITED(stat) && !WIFSIGNALED(stat));
	}
	return (stat);
}
