#include "main.h"

/**
 * _strcmp - comparing two strings
 * @s1: first string.
 * @s2: second string.
 * Return: integer.
 */

int _strcmp(char *s1, char *s2)
{
	int c = 0;

	while (s1[c] != '\0' && s2[c] != '\0')
	{
		if (s1[c] != s2[c])
		{
			return (s1[c] - s2[c]);
		}
		c++;
	}
	return (0);
}

