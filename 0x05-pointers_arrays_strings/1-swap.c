#include "main.h"

/**
 * swap_int - swap the values of two integers.
 * @a: first integer to be used.
 * @b: second integer to be used.
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int ix;

	ix = *a;
	*a = *b;
	*b = ix;
}
