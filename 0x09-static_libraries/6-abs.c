#include "main.h"

/**
 * _abs - computes absolute values of integers.
 * @n: njmber to be computed
 * Return: absolut value or zero.
 */

int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;

		return (abs_val);

	}

	return (n);
}
