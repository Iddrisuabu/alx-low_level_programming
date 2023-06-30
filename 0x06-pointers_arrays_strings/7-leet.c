#include "main.h"

/**
 * leet - encoding a string
 * @s: string used
 * Return: string
 */

char *leet(char *s)
{
	int x, y;
	char c1[] = "aAeEoOtTlL";
	char c2[] = "4433007711";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (s[x] == c1[y])
			{
				s[x] = c2[y];
			}
		}
	}
	return (s);
}
