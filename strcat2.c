#include "main.h"


/**
 * *_strcatcope - concat 2 strings
 * @dest: string to concat into
 * @src: string to be added at the end of dest
 * Return: concated dest + src
*/
char *_strcatcope(char *dest, const char *src)
{
	int i = 0;
	int dest_len = _strlen(dest);

	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
