#include "shell.h"

/**
 * help_shell - In charge of displaying help info for builtin commands
 */

void help_shell(void)
{
	_puts("\nShell Version 1.1.0\n\n");
	_puts("Usage: ./hsh\n\n");
	_puts("Shell builtin commands:\n\n");
	_puts("help\t\tDisplay this help info\n\n");
	_puts("cd [direct]\tChange current working directory\n\n");
	_puts("env\t\tDisplay environment variables\n\n");
	_puts("setenv\t\tSet environment variable\n\n");
	_puts("unsetenv\tUnset an environment variable\n\n");
	_puts("exit\t\tExit shell\n\n");
}
