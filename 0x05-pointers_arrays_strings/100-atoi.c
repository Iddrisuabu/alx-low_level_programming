#include "main.h"

/**
 * _atoi - convert a string to integer.
 * @s: string to be be converted.
 * Return: integer.
 */

int _atoi(char *s)
{
	int a = 0;
	int d = 0;
	int b = 0;
	int len = 0;
	int f = 0;
	int digit = 0;

	while (s[len] != '\0')
		len++;

	while (a < len && f == 0)
	{
		if (s[a] == '-')
			++d;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (d % 2)
				digit = -digit;

			b = b * 10 + digit;
			f = 1;

			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;

			f = 0;
		}
		a++;
	}
	if (f == 0)
		return (0);

	return (b);
}
