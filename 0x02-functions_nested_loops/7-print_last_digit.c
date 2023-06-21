#include "main.h"

/**
 * print_last_digit - last digit number.
 * @ld: parameter to print last number.
 * Return: last digit value.
 */

int print_last_digit(int ld)
{
	int last;

	last = ld % 10;

	if (last < 0)
	{
		last = last * -1;
	}

	_putchar(last + '0');

	return (last);

}
