#include "shell.h"

/**
 * free_error - Frees and release alloced memory
 *		pointers following system error
 * @arg_value: Double pointer to an array of pointers
 * @arg: Double pointer to an array of characters.
 *
 * Return: void.
 */

void free_error(char **arg_value, char *arg)
{
	int index;

	for (index = 0; arg_value[index]; index++)
		free(arg_value[index]);

	free(arg_value);
	free(arg);
	exit(EXIT_FAILURE);
}

/**
 * free_array_tokens - Frees the memory allocated by tokenizer function
 * @pointer: Points to allocated memory
 *
 * Return: void.
 */

void free_array_tokens(char **pointer)
{
	int index;

	for (index = 0; pointer[index]; index++)
		free((pointer[index]));
	free(pointer);
}

/**
 * path_releaser - Releases the global variable that contains PATH
 *
 * Return: Nothing
 */

void path_releaser(void)
{
	if (environ != NULL)
	{
		size_t index = 0;

		while (environ[index] != NULL)
		{
			if (_strncmp(environ[index], "PATH=", 5) == 0)
			{
				free(environ[index]);
				environ[index] = NULL;
				break;
			}
			index++;
		}
	}
}
