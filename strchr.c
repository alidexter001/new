#include "main.h"

/**
 * *_strchr - search for a char in a string
 *
 * @s: string to search in
 * @c: char to search for
 * Return: rest of the string if c is found or Null
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
