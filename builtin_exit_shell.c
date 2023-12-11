#include "shell.h"

/**
 * exit_shell - Exit shell.
 * @args: The arguments.
 *
 * Return: Nothing to be returned.
 */

void exit_shell(char **args)
{
	int stat = 0;

	if (args[1] != NULL)
	{
		stat = _atoi(args[1]);
	}

	free_array_tokens(args);
	free_old_input();
	exit(stat);
}
