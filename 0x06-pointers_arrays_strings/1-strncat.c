#include "main.h"

/**
 * _strcat - to append a string.
 * @src: source of the string to copy.
 * @dest: destination of string copied.
 * @n: maximum number of character to be appended.
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, l;

	l = 0;

	while (dest[l])
	{
		l++;
	}

	i = 0;

	while (i < n && src[i])
	{
		dest[l] = src[i];
		l++;
		i++;
	}

	dest[l] = '\0';
	return (dest);
}
