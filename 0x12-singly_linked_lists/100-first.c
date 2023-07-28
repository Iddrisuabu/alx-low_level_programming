#include <stdio.h>

void _print_str(void) __attribute__((constructor));
/**
 * _print_str - function that prints a string.
 * Return: 0.
 */

void _print_str(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");

}
