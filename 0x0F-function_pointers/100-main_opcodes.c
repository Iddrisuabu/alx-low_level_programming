#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: counts arguments passed.
 * @argv: array of arguments passed.
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int j, i;
	char *s;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	j = atoi(argv[1]);

	if (j < 0)
	{
		printf("Error\n");
		exit(2);
	}

	s = (char *)main;

	for (i = 0; i < j; i++)
	{
		if (i == j - 1)
		{
			printf("%02hhx\n", s[i]);
			break;
		}
		printf("%02hhx ", s[i]);
	}
	return (0);
}

