#include "main.h"
#include <stdio.h>

/**
 * main - to print all arguments.
 * @argc: count arguments.
 * @argv: arguments passed
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
}
