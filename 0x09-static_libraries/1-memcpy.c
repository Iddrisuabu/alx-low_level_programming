#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: destination for memory copied.
 * @src: source of copied memory.
 * @n: number of byte in memory.
 * Return: pointer to destination.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
