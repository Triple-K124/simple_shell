#include "shell.h"

/**
 * _getter_of_env - Retrieve the value of an environment variable
 * @name: The name of the environment variable
 *
 * Return: The value of the environment variable
 */

char *_getter_of_env(const char *name)
{
	char **env;
	size_t len_name = _strlen(name);

	for (env = environ; *env != NULL; env++)
	{
		if (_strncmp(*env, name, len_name) == 0 && (*env)[len_name] == '=')
		{
			return (&(*env)[len_name + 1]);
		}
	}

	return (NULL);
}
