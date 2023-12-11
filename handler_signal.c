#include "shell.h"

/**
 * handle_interrupt_signal - Signal handler for SIGINT (Ctrl+C)
 * @sig: Signal number
 *
 * Return: Nothing
 */

void handle_interrupt_signal(int sig)
{
	(void) sig;
	_putchar('\n');
	prompter();
}

/**
 * handle_quit_signal - The Signal handler for SIGQUIT (Ctrl+\)
 * @sig: Signal no
 *
 * Return: Nothing
 */

void handle_quit_signal(int sig)
{
	(void) sig;
	_puterror("Quit (core dumped)\n");
	exit(EXIT_SUCCESS);
}

/**
 * handle_stop_signal - Signal handler for SIGTSTP (Ctrl+Z)
 * @sig: Signal number
 *
 * Return: Nothing
 */

void handle_stop_signal(int sig)
{
	(void) sig;
	_puts("\n");
	prompter();
}
