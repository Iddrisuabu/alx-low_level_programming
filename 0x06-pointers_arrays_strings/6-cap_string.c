#include "main.h"

/**
  * cap_string - captalize string.
  * @s: string to be used
  * Return: char
  */

char *cap_string(char *s)
{
	int i = 0, a;
	int c = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[i])
	{
		a = 0;

		while (a < c)
		{
			if ((i == 0 || s[i - 1] == spc[a]) && (s[i] >= 97 && s[i] <= 122))
				s[i] -= 32;

			a++;
		}

		i++;
	}

	return (s);
}
