#include "main.h"

/**
 * get_bit - get the value of a bit at a given index.
 * @index: index to find.
 * @n: number to  find index.
 * Return: returns the value of a bit at a given index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	while (n)
	{
		if (i == index)
		{
			if (n % 2)
				return (1);
			else
				return (0);
		}

		n = n / 2;
		i++;
	}

	if (index > i && index < 63)
		return (0);

	return (-1);
}
