#include "main.h"

/**
 * factorial - calculate the factorial of a number.
 * @n: given number
 * Return: integer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n < 1)
		return (1);

	else
		return (n * factorial(n - 1));

}
