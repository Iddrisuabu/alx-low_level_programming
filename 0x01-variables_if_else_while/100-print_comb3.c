#include <stdio.h>

/**
 * main - enrty point.
 * Description - possible different combination of two digit.
 * Return: 0
 */

int main(void)
{
	int x;
	int y;

	for (x = 0; x < 9; x++)
	{
		for (y = 0; y < 10; y++)
		{
			putchar(x + '0');
			putchar(y + '0');

			if (x == 8 && y == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
