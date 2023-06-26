#include "main.h"
#include <stdio.h>

/**
  * print_rev - Prints a string in reverse
  * @s: string to print
  *
  * Return: void
  */

void print_rev(char *s)
{
	int r = 0;

	while (s[r] != '\0')
	{
		r++;
	}

	for (r -= 1; r >= 0; r--)
	{
		_putchar(s[r]);
	}

	_putchar('\n');
}

