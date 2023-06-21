#include "main.h"

/**
 * print_sign - print sign of numbers.
 * @n: parameter n to be checked.
 * Return: 1 for positive, -1 for negative, 0 for otherwise.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);

	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	else
	{
		_putchar(48);
		return (0);
	}

}
