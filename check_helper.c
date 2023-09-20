#include "main.h"

/**
 * chelper - check if the command is executable
 * @path: arguments separated in array
 * @num_path: index of the argument
 * @arg: arguments passed throught stdin
 * Return: always NULL
 */
char *chelper(char *path[], int num_path, char *arg)
{
	int j;
	size_t len1, len2;
	char *added = "/";
	char *checked;

	for (j = 0; j < num_path; j++)
	{
		len1 = _strlen(path[j]);
		len2 = _strlen(added);
		checked = (char *)malloc(len1 + len2 + 1);
		if (checked == NULL)
		{
			return (NULL);
		}
		_strcpy(checked, path[j]);
		_strcatcope(checked, added);
		_strcatcope(checked, arg);
		if (access(checked, X_OK) == 0)
		{
			return (checked);
		}
		free(checked);
	}
	if (j == num_path)
	{
		perror(arg);
	}
	len1 = 0;
	len2 = 0;
	checked = NULL;
	return (NULL);
}
