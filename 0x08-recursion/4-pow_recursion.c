#include "main.h"

/**
 * _pow_recursion - function that returns the exponent of an integer.
 * @x: base integer.
 * @y: exponent integer.
 * Return: integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y < 1)
		return (1);

	else
		return (x * _pow_recursion(x, y-1));

}
