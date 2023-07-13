#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate strings
 * @s1: source string.
 * @s2: destination string.
 * @n: number of bytes.
 * Return: charracter.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int i = 0, j = 0, y = 0, a;

	if (s1 == 0)
		s1 = "";

	if (s2 == 0)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	if (n >= j)
		y = i + j;
	else
		y = i + n;

	c = malloc(sizeof(char) * (y + 1));

	if (c == NULL)
		return (NULL);

	j = 0;
	for (a = 0; a < y; a++)
	{
		if (a <= i)
		{
			c[a] = s1[a];
		}
		if (a >= i)
		{
			c[a] = s2[j];
			j++;
		}
	}
	c[a] = '\0';
	return (c);
}
