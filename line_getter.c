#include "shell.h"

/**
* line_getter - Take input from stdin.
*
* Return: The string entered by the user.
*/
void *line_getter(void)
{
	static char buf[BUFFER_SIZE];
	static int buf_posi, buf_size;
	char *input_strg = NULL;
	char curr_char;
	int input_len = 0;

	while (1)
	{
		if (buf_posi >= buf_size)
		{
			buf_size = read(STDIN_FILENO, buf, BUFFER_SIZE);
			buf_posi = 0;
			if (buf_size == 0)
				return (input_strg);
			else if (buf_size < 0)
			{
				perror("read");
				return (NULL);
			}
		}

		curr_char = buf[buf_posi];

		buf_posi++;

		if (curr_char == '\n')
		{
			input_strg = realloc(input_strg, input_len + 1);
			input_strg[input_len] = '\0';
			return (input_strg);
		}
		else
		{
			input_strg = realloc(input_strg, input_len + 1);
			input_strg[input_len] = curr_char;
			input_len++;
		}
	}
}
