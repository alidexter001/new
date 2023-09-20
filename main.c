#include "main.h"

/**
 * main - read the command al loop in the promt
 * Return: 0 upoun success or -1 otherwise
 */

int main(void)
{
	size_t n = 10;
	char *buf = NULL;
	int input;
	char *exit = "exit";

	while (1)
	{
		printf("$ ");
		input = getline(&buf, &n, stdin);
		if (input == -1)
		{
			break;
		}
		if (buf[input - 1] == '\n')
		{
			buf[input - 1] = '\0';
		}
		if (buf[0] == '\0' || !input)
		{
			continue;
		}
		if (strcmp(buf, exit) == 0)
		{
			break;
		}
		screen(buf);
	}
	free(buf);
	return (0);
}
