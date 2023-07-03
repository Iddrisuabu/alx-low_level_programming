#include "main.h"

/**
 * _strspn - function to get the length of a substring.
 * @s: source string
 * @accept: accpet string
 * Return: 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, y;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*s == accept[y])
			{
				i++;
				break;
			}
			else if (accept[y + 1] == '\0')
				return (i);
		}
		s++;
	}
	return (0);
}

