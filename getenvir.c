#include "main.h"
/**
 * *_getenvir - get the environement variables from environ
 * @path: path to check if availabel in the env
 * Return: value of the path
 */

char *_getenvir(char *path)
{
	int i = 0;
	char *current_env;
	char *equal_sign;

	if (path == NULL)
		return (NULL);
	for (i = 0; environ[i] != NULL; i++)
	{
		current_env = environ[i];
		if (_strcmp(current_env, path) == 0)
		{
			equal_sign = _strchr(current_env, '=');
			if (equal_sign != NULL)
			{
				return (equal_sign + 1);
			}
		}
	}
	return (NULL);
}
