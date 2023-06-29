#include "main.h"

/**
 * _strncpy - to copy a string.
 * @src: source of string.
 * @dest: destination of string.
 * @n: max number of bytes to be used.
 * Return: dest,
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c = 0;

	while (c < n && src[c])
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
