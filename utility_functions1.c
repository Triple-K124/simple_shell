#include "shell.h"

/**
 * _strlen - This returns the length of a string
 * @string: String whose length we want to find out
 *
 * Return: The length of the string
 */
int _strlen(const char *string)
{
	int index = 0;

	if (!string)
		return (0);

	while (*string++)
		index++;
	return (index);
}

/**
 * _strcmp - Compare two strings to see if they are the same.
 * @string1: The first string to be compared.
 * @string2: The second string to be compared.
 * Return: 0 if @string1 and @string2 are equal,
 *         a negative value if @string1 is less than @string2,
 */
int _strcmp(const char *string1, const char *string2)
{
	while (*string1 != '\0' && *string2 != '\0' && *string1 == *string2)
	{
		string1++;
		string2++;
	}

	return ((int) (*string1) - (*string2));
}

/**
 * _strncmp - Compare two strings to a certain length.
 * @string1: The first string to be compared.
 * @string2: The second string to compared.
 * @n: Maximum number of characters that will be compared.
 *
 * Return: 0 if the strings are equal to n characters, negative value
 *         if string1 is less than string2.
 */
int _strncmp(const char *string1, const char *string2, size_t n)
{
	unsigned char c_1, c_2;

	while (n-- > 0)
	{
		c_1 = (unsigned char) *string1++;
		c_2 = (unsigned char) *string2++;

		if (c_1 != c_2)
			return (c_1 - c_2);
		if (c_1 == '\0')
			break;
	}

	return (0);
}

