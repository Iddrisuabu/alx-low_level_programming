#include "main.h"

/**
 * binary_to_uint - convert binary to decimal
 * @b: string to be converted.
 * Return: positive integer.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int j = 0;

	if (b == NULL)
		return (0);

	for (; b[j] != '\0'; j++)
	{
		if (b[j]  == '0' || b[j] == '1')
			res = res * 2 + (b[j] - '0');
		else
			return (0);

	}

	return (res);

}
