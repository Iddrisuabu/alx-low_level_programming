#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers.
 * @separator:  string to be printed between numbers.
 * @n: the number of integers passed to the function.
 * @...: variables to be printed.
 * Return; void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numb;

	va_start(numb, n);

	for (i = 0; i < n && n > 0; i++)
	{
		printf("%d", va_arg(numb, int));

		if (i != (n - 1) && separator != 0)
			printf("%s", separator);

	}

	va_end(numb);

	printf("\n");
}
