#include "shell.h"

/**
* path_getter - Gets the PATH environment varaible.
*
* Return: Points to the value of $PATH.
*/
char *path_getter(void)
{
	return (_getter_of_env("PATH"));
}
