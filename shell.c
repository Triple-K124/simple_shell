#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * main - recieves data
 * after receiving data should tokenize it
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *buffer = NULL;
	size_t bufsize = 0;
	size_t characters;

	while (1)
	{
	printf("$ ");
	characters = getline(&buffer, &bufsize, stdin);
	if (characters == -1)
	{
		perror("error");
		exit(1);
	}
		printf("See if it will work");

	}
	free(buffer);
	return (0);

}
