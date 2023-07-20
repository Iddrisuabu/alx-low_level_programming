#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all arguments of the function.
 * @n: first parameter.
 * @...: variables to sum.
 * Return: integer.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;
	va_list numb;

	va_start(numb, n);

	for (; i < n; i++)

		sum = sum + va_arg(numb, int);

	va_end(numb);

	return (sum);
}
