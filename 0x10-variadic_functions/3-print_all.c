#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: void.
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	char *sp = "";
	va_list dtp;

	va_start(dtp, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sp, va_arg(dtp, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(dtp, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(dtp, double));
					break;
				case 's':
					str = va_arg(dtp, char *);
					if (str == NULL)
						printf("(nil");
					printf("%s%s", sp, str);
					break;
				default:
					i++;
					continue;
			}

		sp = ", ";
		i++;

		}
	}
	va_end(dtp);
	printf("\n");
}
