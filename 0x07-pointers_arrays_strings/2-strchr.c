#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: string used.
 * @c: character to be located.
 * Return: chracter.
 */

char *_strchr(char *s, char c)
{
	int z;

	for (z = 0; s[z] >= '\0'; z++)
	{
		if (s[z] == c)
		{
			return (&s[z]);
		}

	}
	return ('\0');

}
