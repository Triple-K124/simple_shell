#include "shell.h"

/**
 * _atoi - Converts a string to an integer.
 * @string: The string to be converted to an integer.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(const char *string)
{
	int index, sign;
	unsigned int number;

	index = 0;
	sign = 1;
	number = 0;

	while (string[index] != '\0')
	{
		if (string[index] == '-')
			sign *= -1;
		else if (string[index] >= '0' && string[index] <= '9')
			number = (number * 10) + (string[index] - '0');
		else
			break;
		index++;
	}
	return (number * sign);
}

/**
 **_memset - fills the memory with a constant byte
 *@area: pointer to the memory area
 *@byte: byte to fill *s with
 *@n: amount of bytes to be filled
 *Return: (s) a pointer to the memory area s
 */
char *_memset(char *area, char byte, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		area[i] = byte;
	return (area);
}

