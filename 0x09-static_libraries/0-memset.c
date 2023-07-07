#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: memory area to fill
 * @b: constant byte.
 * @n: number of byte to fill memory.
 * Return: pointer to s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;

	return (s);
}

