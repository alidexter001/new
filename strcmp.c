#include "main.h"

/**
 * _strcmp - comparing two strings
 *
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: 0 if the stings are equal, 15 or -15 if different
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			result = 0;
		}
		else if (s1[i] < s2[i])
		{
			result = (s1[i] - s2[i]);
			break;
		}
		else if (s1[i] > s2[i])
		{
			result = (s1[i] - s2[i]);
			break;
		}
		i++;
	}
	return (result);
}
