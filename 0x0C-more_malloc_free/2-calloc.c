#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of elements.
 * @size: size of bytes.
 * Return: 0.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i, y;

	if (nmemb == 0 || size == 0)
		return (NULL);

	y = nmemb + size;

	arr = malloc(y);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < y; i++)
		arr[i] = 0;

	return (arr);
}

