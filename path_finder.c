#include "shell.h"

/**
* path_finder - Finds a command in the directory specified in the PATH
*		environment variable
* @cmd: Points to the 'command' string to look for.
*
* Return: Points to the string containing the full path if successful
*	or NULL if not successful (failure).
*/
char *path_finder(char *cmd)
{
	struct stat st;
	int stat_ret, i;
	char buffer[PATH_MAX_LENGTH], *path, *ret, **directory;

	path = path_getter();
	if (!path)
		return (NULL);
	directory = tokenizer(path, PATH_SEPARATOR);
	if (!directory)
		return (NULL);
	for (i = 0; directory[i]; i++)
	{
		_memset(buffer, 0, PATH_MAX_LENGTH);
		_strcpy(buffer, directory[i]);
		_strcat(buffer, "/");
		_strcat(buffer, cmd);
		stat_ret = stat(buffer, &st);
		if (stat_ret == 0 && S_ISREG(st.st_mode) && (st.st_mode & S_IXUSR))
		{
			free_array_tokens(directory);
			ret = malloc(sizeof(char) * (strlen(buffer) + 1));
			if (!ret)
				return (NULL);
			strcpy(ret, buffer);
			return (ret);
		}
	}
	if (stat_ret == -1)
		free_array_tokens(directory);
	return (NULL);
}
