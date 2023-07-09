#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - print summation of positive integers
 * @argc: counts arguments.
 * @argv: pass arguments
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	unsigned int n, sum = 0;
	int i;
	char *s;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			s = argv[i];

			for (n = 0; n < strlen(s); n++)
			{
				if (s[n] >= 58 || s[n] <= 47)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum = sum + atoi(s);
			s++;
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");

	return (0);

}



