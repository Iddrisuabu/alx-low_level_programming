#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse.
 * @s: string to be reversed.
 * Return: 0.
 */

void _print_rev_recursion(char *s)
{
	//base case.
	if (*s == '\0')
	{
		return;
	}

	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);

	}
}
