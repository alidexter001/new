#include "main.h"

/**
 * screen - takes a str passed to the promt
 * and checks the 1st arg before a space or special char
 * @str: string passed to the stdin
 * Return: no process found for the string on execve
 */

int screen(char *str)
{
	char *p[BUFFER];
	const char *d = " ";
	int j = 0;
	char *path;

	p[j] = strtok(str, d);
	while (p[j] != NULL)
	{
		j++;
		p[j] = strtok(NULL, d);
	}
	if (_strchr(p[0], '/') != NULL)
	{
		path = p[0];
	} else
	{
		path = checker(p[0]);
	}
	if (access(p[0], F_OK | X_OK) == 0)
	{
		exec(p, p[0]);
	}
	else if (path != NULL)
	{
		exec(p, path);
	}
	else
	{
		perror("./hsh");
	}
	return (0);
}
