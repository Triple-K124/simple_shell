#include "shell.h"

/**
* echo_shell - This handles how the echo behaves
* @args: This is the tokenized input from user
*
* Return: Returns nothing as it is void
*/

void echo_shell(char **args)
{
	char result[256];
	char clean_result[256];
	int clean_index = 0;
	int i;


	/** Skip the first element (program name) in the args array */
	result[0] = '\0';
	for (i = 1; args[i] != NULL; i++)
	{
		/** Concatenate the argument to the result string */
		_strcat(result, args[i]);

		/** Print a space after each argument, except for the last one */
		if (args[i + 1] != NULL)
		{
			_strcat(result, " ");
		}
	}

	/** Remove double quotes from the result string */

	for (i = 0; i < _strlen(result); i++)
	{
		if (result[i] != '"')
		{
			clean_result[clean_index++] = result[i];
		}
	}
	clean_result[clean_index] = '\0';

	/** Output the cleaned result string */
	for (i = 0; i < _strlen(clean_result); i++)
	{
		putchar(clean_result[i]);
	}
	putchar('\n');
}

