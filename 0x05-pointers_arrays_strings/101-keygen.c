#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - to generates passwords.
 * Return: 0.
 */

int main(void)
{
	int i = 0;
       	int p = 0;
	time_t t;

	srand((unsigned int) time(&t));

	while (p < 2772)
	{
		i = rand() % 128;

		if ((p + i) > 2772)
			break;
		
		p = p + i;
		printf("%c", i);
	}
	printf("%c\n", (2772 - p));
	return (0);
}

