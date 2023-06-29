#include "main.h"

/**
 * string_toupper - change frim lower to upper case.
 * @alp: string to be changed.
 * Return: upper case char
 */

char *string_toupper(char *alp)
{
	int u = 0;

	while (alp[u])
	{
		if (alp[u] >= 97 && alp[u] <= 122)
		{
			alp[u] -= 32;
		}
		u++;
	}
	return (alp);
}
