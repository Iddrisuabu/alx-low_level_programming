#include <stdio.h>

/**
 * main - entry point
 * Description - print numbers of base 10.
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar(x + 48);
	putchar('\n');

	return (0);

}
