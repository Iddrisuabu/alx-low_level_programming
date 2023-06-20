#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabets 10 times.
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int x = 0;
	char y;

	while (x < 10)
	{

		for (y = 97; y <= 122; y++)
		{
			_putchar(y);
		}

	_putchar('\n');

	x++;

	}

}
