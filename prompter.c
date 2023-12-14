#include "shell.h"

/**
* prompter - Show the shell prompt to stdin.
*
* Return: void
*/
void prompter(void)
{
	if (isatty(STDIN_FILENO))
	{
		_puts(PROMPT);
		fflush(stdout);
	}
}
