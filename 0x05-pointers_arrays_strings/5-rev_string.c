#include "main.h"

/**
 * rev_string - to reverse a  string
 * @s: string to be reversed.
 * Return: 0
 */

void rev_string(char *s)
{
	char r = s[0];
	int x;
	int count = 0;

	while (s[count] != '\0')
		count++;

	for (x = 0; x < count; x++)
	{
		count--;
		r = s[x];
		s[x] = s[count];
		s[count] = r;
	}
}

