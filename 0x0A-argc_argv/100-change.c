#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for money.
 * @argc: counts arguments
 * @argv: arguments passed.
 * Return: 0 on Success, 1 (Error)
 */

int main(int argc, char *argv[])
{
	int x, num, res;
	int cent[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	res = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (x = 0; x < 5 && num >= 0; x++)
	{
		while (num >= cent[x])
		{
			res++;
			num -= cent[x];
		}
	}

	printf("%d\n", res);
	return (0);
}

