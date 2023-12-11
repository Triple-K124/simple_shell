#include "shell.h"

/**
 * env_shell - Prints all the environment variables.
 *
 * Return: void
 */

int env_shell(void)
{
	int j;

	for (j = 0; environ[j]; j++)
	{
		_puts(environ[j]);
		_putchar('\n');
	}

	return (0);
}
