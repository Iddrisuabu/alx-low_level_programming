#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate all arguments.
 * @ac: counts arguments
 * @av: pass arguments.
 * Return: string.
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, x = 0, y = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			y++;
	}

	y = y + ac;

	s = malloc(sizeof(char) * y + 1);

	if (s == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
		s[x] = av[i][j];
		x++;
	}
	if (s[x] == '\0')
	{
		s[x++] = '\n';
	}

	}

	return (s);
}
