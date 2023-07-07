#include "main.h"

/**
 * _strcat - to append a string.
 * @src: source of the string to copy.
 * @dest: destination of string copied.
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, l;

	l = 0;

	while (dest[l])
	{
		l++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[l] = src[i];
		l++;
	}

	dest[l] = '\0';
	return (dest);
}
