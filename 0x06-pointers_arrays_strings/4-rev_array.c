#include "main.h"

/**
 * reverse_array - function to reverse an array of integers.
 * @a: array to be reversed
 * @n: number of elements of array
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int r;
	int i;

	r = 0;

	while (r < n--)
	{
		i = a[r];
		a[r] = a[n];
		a[n] = i;
	r++;
	}
}
