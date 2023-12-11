#include "shell.h"

/**
 * _strcpy - copies a string from sorce to destination
 * @destination: the destination
 * @sorce: the source
 *
 * Return: pointer to destination
 */
char *_strcpy(char *destination, char *sorce)
{
	int index = 0;

	if (destination == sorce || sorce == 0)
		return (destination);
	while (sorce[index])
	{
		destination[index] = sorce[index];
		index++;
	}
	destination[index] = 0;
	return (destination);
}

/**
 * _strcat - Joins two strings to become one string
 * @destination: the destination buffer
 * @source: the source buffer
 *
 * Return: pointer to destination buffer
 */
char *_strcat(char *destination, const char *source)
{
	char *ret = destination;

	while (*destination)
		destination++;
	while (*source)
		*destination++ = *source++;
	*destination = *source;
	return (ret);
}

/**
 * _strdup - duplicates a string into more than one
 * @string: the string that will be duplicated
 *
 * Return: pointer to the duplicated string
 */
char *_strdup(const char *string)
{
	int len = 0;
	char *ret;

	if (string == NULL)
		return (NULL);
	while (*string++)
		len++;
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	for (len++; len--;)
		ret[len] = *--string;
	return (ret);
}

/**
 *_putchar - writes the character to the standard output stream
 * @c: The character to be printed
 * Return: On success return 1
 * On error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

