#include "main.h"

/**
  * puts_half - prints half of a string
  * @str: string to be printed
  * Return: 0
  */
void puts_half(char *str)
{
	int j = 0;
	int i;

	while (str[j] != '\0')
	{
		j++;
	}

	if (j % 2 == 1)
	{
		i = (j - 1) / 2;
		i += 1;
	}
	else
	{
		i = j / 2;
	}

	for (; i < j; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

