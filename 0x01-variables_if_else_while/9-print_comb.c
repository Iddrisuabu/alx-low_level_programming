#include<stdio.h>

/**
 * main - entry point
 * description - possible combination
 * Return: 0
 */

int main(void)
{
	int x;

	for  (x = 0; x <= 9; x++)
	{
		putchar('0' + x);

		if (x < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
