#include "main.h"
#include <stdlib.h>

/**
 * _strdup - to create memory for a duplicated string.
 * @str: the source string.
 * Return: pointer to the  duplicate string.
 */

char *_strdup(char *str)
{
	char *sdu;
	int j, i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	sdu = malloc(sizeof(char) * (i + 1));

	if (sdu == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
	{
		sdu[j] = str[j];

	}

	sdu[j] = '\0';

	return (sdu);
}



