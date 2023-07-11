#include "main.h"
#include <stdlib.h>

/**
 * create_array - allocates memory to an array of characters.
 * @size: size of array.
 * @c: array of character
 * Return: pointer to character.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *s;

	if (s == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	for (j = 0; j < size; j++)
	{
		s[j] = c;
	}

	if (s == NULL)
	{
		return (NULL);
	}

	return (s);
}
