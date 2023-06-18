#include <stdio.h>

/**
 *  main - entry point
 *  description - alphabets in reverse order
 *  Return: 0
 */

int main(void)
{
	int y;

	for (y = 122; y >= 97; y--)
		putchar(y);
	putchar('\n');

	return (0);
}
