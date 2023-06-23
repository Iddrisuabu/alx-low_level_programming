#include "main.h"

/**
 * more_numbers - print numbers from 0l to 14, 10times
 * Return: 0 on success.
 */

void more_numbers(void)
{
	int i = 0;
	int x;

	while (i < 10)
	{
		for (x = 0; x < 15; x++)
		{
			if (x > 9)
			{
			_putchar((x / 10) + 48);
			}

		_putchar((x % 10) + 48);
		}
		i++;

	_putchar('\n');
	}

}
