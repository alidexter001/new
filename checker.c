#include "main.h"

/**
 * checker - takes in the argument from stdin and check if valid command
 * @arg: args passed trhough the stdin
 * Return: always 0
 */

char *checker(char *arg)
{
	int i = 0;
	char *fullpath = _getenvir("PATH");
	char *d = ":";
	char *path[20];
	char *pathcopy;
	char *result;

	pathcopy = (char *)malloc(_strlen(fullpath) + 1);
	if (pathcopy == NULL)
	{
		return (NULL);
	}
	_strcpy(pathcopy, fullpath);
	path[0] = strtok(pathcopy, d);
	while (path[i] != NULL)
	{
		i++;
		path[i] = strtok(NULL, d);
	}
	result = chelper(path, i, arg);
	free(pathcopy);
	path[20] = NULL;
	return (result);
}
