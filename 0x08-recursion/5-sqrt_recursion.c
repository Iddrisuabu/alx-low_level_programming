#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - print the square root of a number.
 * @n: natural number.
 * Return: integer.
 */

int _sqrt_recursion(int n)
{
		return (_sqrt(n, 1));

}

/**
 * _sqrt - to calculate the square root of the number.
 * @n: natual number.
 * @i: iterator.
 * Return: results of the square root.
 */

int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (_sqrt(n, i + 1));
}
