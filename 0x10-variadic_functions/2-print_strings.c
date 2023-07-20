#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings.
 * @separator: the string to be printed between strings.
 * @n: the number of strings passed to the function.
 * @...: variable number of strings to be printed.
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;
	char *s;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(str, char *);

		if (s == 0)
			printf("(nil)");

		else
			printf("%s", s);

		if (i != (n - 1) && separator != 0)
			printf("%s", separator);

	va_end(str);

	}
	printf("\n");

}



