#include "main.h"

/**
 * flip_bits - Calculates number of bits needed to be fliped.
 * @n: first unsigned long int
 * @m: second unsigned long int
 * Return: number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = 0, count = 0;

	mask = n ^ m;
	while (mask)
	{
		if (mask & 1)
			count++;

		mask >>= 1;
	}

	return (count);
}
