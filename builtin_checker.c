#include "shell.h"

/**
 * builtin_checker - confirms if the command is a builtin
 * @args: the arguments array
 *
 * Return: 1 if the command is a builtin, 0 if not
 */

int builtin_checker(char **args)
{
	if (!args[0])
		return (0);
	if (!_strcmp(args[0], "exit"))
		exit_shell(args);
	else if (!_strcmp(args[0], "env"))
		env_shell();
	else if (!_strcmp(args[0], "setenv"))
		setenv_shell(args);
	else if (!_strcmp(args[0], "unsetenv"))
		unsetenv_shell(args);
	else if (!_strcmp(args[0], "help"))
		help_shell();
	else if (!_strcmp(args[0], "cd"))
		cd_shell(args);
	else if (!_strcmp(args[0], "clear"))
		clear_shell(args);
	else
		return (0);

	return (1);
}
