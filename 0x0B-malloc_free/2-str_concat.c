#include "main.h"
#include <stdlib.h>

/**
 * str_concat - program to concatenate two string.
 * @s1: source string.
 * @s2: destination string.
 * Return: character
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int a = 0, i = 0, b = 0, d = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;

	while (s2[b])
		b++;

	i = a + b;

	p = malloc(sizeof(char) * (i + 1));

	if (p == NULL)
		return (NULL);

	b = 0;
	while (d < i)
	{
		if (d <= a)
		{
			p[d] = s1[d];
		}

		if (d >= a)
		{
			p[d] = s2[b];
			b++;
		}
		d++;
	}
	p[d] = '\0';
	return (p);
}
