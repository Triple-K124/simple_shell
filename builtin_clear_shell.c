#include "shell.h"

/**
 * clear_shell - Clears and wipes the terminal screen.
 * @args: This is an array of arguments
 *
 * Return: 1 to continue executing, or 0 to exit.
 *
 */

int clear_shell(char **args)
{
	(void)args;
	/* avoid "unused parameter" warning */

	_puts("\033[2J\033[H")
		return (1);
}
