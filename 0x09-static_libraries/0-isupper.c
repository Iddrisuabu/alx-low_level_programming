#include "main.h"

/**
 * _isupper - function that check for uppercase character.
 * @c: the parameter to be tested.
 * Return: 1
 */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);

	}

	else
		return (0);

}
