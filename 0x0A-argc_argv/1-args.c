#include "main.h"
#include <stdio.h>

/**
 * main - to count arguments passed to program
 * @argc: count arguments
 * @argv: array of string.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
