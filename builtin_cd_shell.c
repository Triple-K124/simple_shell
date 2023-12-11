#include "shell.h"

/**
 * cd_shell - Will change the current working directory of the shell
 * @args: This is the array of arguments
 */

void cd_shell(char **args)
{
	char *direct = args[1];
	int rent;

	/* when no directory is provided, change it to HOME directory */

	if (direct == NULL)
	{
		direct = _getter_of_env("HOME");
		if (direct == NULL)
		{
			_puts("cd: HOME directory not found\n");
			return;
		}
	}

	rent = chdir(direct);
	if (rent == -1)
	{
		perror("cd");
	}
}
