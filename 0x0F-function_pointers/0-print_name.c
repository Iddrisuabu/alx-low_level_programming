#include "function_pointers.h"

/**
 * print_name - prints a name using function pointer.
 * @name: name to be printed.
 * @f: function pointer.
 * Return: void.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);

}
