#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints multiplication results.
 * @argc: counts arguments
 * @argv: parameter to pass arguments.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int res;
	int a = 0;
	int b = 0;

	if (argc >= 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		res = (a * b);
		printf("%d\n", res);
	}

	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
