#include "main.h"

/**
 * print_most_numbers - print number whilst ignoring 2 and 4.
 * Return: 0.
 */

void print_most_numbers(void)
{
	int y;

	for (y = 0; y < 10; y++)
	{
		if (y == 2 || y == 4)
		{
			continue;
		}
	_putchar(y + '0');

	}

	_putchar('\n');
}
