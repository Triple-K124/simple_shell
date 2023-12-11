#include "shell.h"

/**
* prompter - Show the shell prompt to stdin.
*
* Return: void
*/
void prompter(void)
{
	_puts(PROMPT);
	fflush(stdout);
}
