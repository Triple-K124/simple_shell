#include "shell.h"

/**
* tokenizer - tokenizing user input into arguments
*
* @str: String to be tokenized.
* @delimeter: Delimeter used to split string.
*
* Return: an array of pointers to tokens
*	or NULL if an error occurs.
*/
char **tokenizer(char *str, const char *delimeter)
{
	char *tok = NULL;
	char **ment = NULL;
	int i = 0;

	tok = strtok(str, delimeter);
	while (tok)
	{
		ment = realloc(ment, sizeof(char *) * (i + 1));
		if (ment == NULL)
			return (NULL);

		ment[i] = malloc(_strlen(tok) + 1);
		if (!(ment[i]))
			return (NULL);

	_strcpy(ment[i], tok);
	tok = strtok(NULL, delimeter);
	i++;
	}
	/* Increase the size of the array if needed */
	ment = realloc(ment, (i + 1) * sizeof(char *));
	if (!ment)
		return (NULL);

	ment[i] = NULL;
	return (ment);
}

/**
* tokenize_user_input - breaks a user input string into tokens
* @user_input: the user input string to be tokenized
*
* Return: Array of pointers to the tokenized tokens, Null if error occurs
*/
char **tokenize_user_input(char *user_input)
{
	char **tokens = NULL;
	char *temp = NULL;

	temp = _strdup(user_input);
	if (temp == NULL)
	{
		_puts("Memory allocation failed\n");
		exit(EXIT_FAILURE);
	}

	tokens = tokenizer(temp, " \t\r\n\a");
	free(temp);

	return (tokens);
}
