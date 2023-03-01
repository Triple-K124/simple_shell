#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>

/**
 * main - recieves data
 * after receiving data should tokenize it
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *argv[] = {"/bin/ls", "-l", NULL};
	char *buffer = NULL;
	size_t bufsize = 0;
	

	while (1)
	{
	printf("$ ");
	characters = getline(&buffer, &bufsize, stdin);
	/**if (characters == -1)
	*{
	*	perror("error");
	*	exit(1);
	*}
	*/


	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("Error:");
	}

	}
	free(buffer);
	return (0);

}
