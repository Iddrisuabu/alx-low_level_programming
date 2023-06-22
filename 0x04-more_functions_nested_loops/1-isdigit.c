#include "main.h"

/**
 * _isdigit - to check for digit.
 * @c: number to be checked.
 * Return: 1
 */

int _isdigit(int c)
{
	if (c >= 0 && c < 10)

		return (1);

	else
		return (0);
}
