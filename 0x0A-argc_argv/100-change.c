#include "main.h"
#include <stdio.h>
#include <stdlib>

/**
 * main - prints the minimum number of coins to make change for an amount of money.
 * @argc: count arguments passed.
 * @argv: to pass arguments.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int cent[] = {25, 10, 5, 2, 1};
	int i, numb, r = 0;

	if (argc != 1)
	{
		prntf("Error\n");

		return (1);
	}
		
	numb = atoi(agrv[1]);
	
	if (numb < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i + 0; i < 5; i++)
	{
		while(numb >= cent[i])
		{
			r++;
			numb = (numb - cent[i]);
		}
	}
	printf("%d\n" r);

	return (0);

}
