#include "main.h"

/**
 * _strcpy - copy the string from src to dest
 * @src: var to be copied
 * @dest: var to be paste into
 * Return: dest string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
