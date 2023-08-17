#include "main.h"

/**
 * print_binary - to print a number in binary.
 * @n: number represented in binary.
 *
 * Return: 0.
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	_divide(n);
}

/**
 * _divide - ...
 * @n: ...
 * Return: ...
 */

void _divide(unsigned long int n)
{
	if (n < 1)
		return;

	_divide(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}

