#include "shell.h"

static char *end_input;
/**
* input_getter - Get the input from the user.
*
* Return: Pointer to a buffer that contains the user's input
*/
char *input_getter(void)
{
	char *user_input = NULL;
	size_t input_size = 0;
	ssize_t mread;

	do {
		/* Display the shell prompt */
		prompter();

		/* Read input line from the user */
		mread = getline(&user_input, &input_size, stdin);

		/* Confirm if there is an EOF or error */
		if (mread == -1)
		{
			free(user_input);
			_puts("\n");
			return (NULL);
		}

		/* Trailing newline character removed */
		user_input[mread - 1] = '\0';
	} while (user_input[0] == '\0' || isspace(user_input[0]));

	/* Change the end_input to point to the new input */
	end_input = user_input;
	return (user_input);

}

/**
* free_old_input - Releases and frees the last recent input entered by user.
*
* This function release memory for the last recent input string entered by user
*/
void free_old_input(void)
{
	free(end_input);
	end_input = NULL;
}
