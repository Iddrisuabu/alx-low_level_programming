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
	va_list dtp;
	char *sp = "";

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
					if (!str)
						printf("(nil");
					printf("%s%s", sp, str);
					break;

					i++;
			}

		sp = ",";
		i++;

		}
	}
	va_end(dtp);
	printf("\n");
}
