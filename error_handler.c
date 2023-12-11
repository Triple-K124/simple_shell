#include "shell.h"

/**
 * _puts - Shows string on the stdout stream
 * @string: This is the string that will be printed
 *
 * Return: Void
 */

void _puts(char *string)
{
	size_t length;
	ssize_t no;

	length = _strlen(string);
	no = write(STDOUT_FILENO, string, length);

	if (no == -1)
	{
		perror("write");
	}
}

/**
* _puterror - Shows an error message on the stdout stream
* @error: The error message that will be printed
*
* Return: void
*/

void _puterror(char *error)
{
	size_t length;
	ssize_t no;

	length = _strlen(error);
	no = write(STDERR_FILENO, error, length);

	if (no == -1)
	{
		perror("write");
	}
}
