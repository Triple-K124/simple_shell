#include "shell.h"

/**
 * setenv_shell - Sets the environment variables
 * @args: Arguments
 *
 * Return: Nothing
 */

int setenv_shell(char **args)
{
	char *nm, *val;

	if (args[1] == NULL || args[2] == NULL)
	{
		_puterror("Usage: setenv VARAIBLE VALUE\n");
		return (-1);
	}

	nm = args[1];
	val = args[2];

	if (setenv(nm, val, 1) != 0)
	{
		_puterror("setenv");
		return (-1);
	}

	return (0);
}

/**
 * unsetenv_shell - Unset environment variable
 * @args: Arguments (name of the environment variable)
 *
 * Return: Nothing
*/

int unsetenv_shell(char **args)
{
	char *nm;

	if (args[1] == NULL)
	{
		_puterror("Usage: unsetenv VARIABLE\n");
		return (-1);
	}

	nm = args[1];
	if (unsetenv(nm) != 0)
	{
		_puterror("unsetenv");
	}

	return (0);
}
