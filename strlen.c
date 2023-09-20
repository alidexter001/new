#include "main.h"

/**
 * _strlen - retrning the length of a string
 * @str: char to calculate length of
 * Return: int length of the string
 */

size_t _strlen(char *str)
{
	size_t i = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}
