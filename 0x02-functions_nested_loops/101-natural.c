#include <stdio.h>

/**
  * main - Prints the sum of all multiples of 3 and 5.
  * Return: 0.
  */

int main(void)
{
	int a = 0;
	int b = 0;

	while (a < 1024)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			b += a;
		}

		a++;
	}

	printf("%d\n", b);

	return (0);
}
