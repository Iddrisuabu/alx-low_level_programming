#include "main.h"

/**
 * print_alphabet - a function that print alphabet in lower case.
 * Return: 0
 */

void print_alphabet(void)
{
	int alp;

	for (alp = 97; alp <= 122; alp++)
		_putchar(alp);

	_putchar('\n');
}
