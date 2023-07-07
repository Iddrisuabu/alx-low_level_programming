#include "main.h"

/**
 * _isalpha - checking for alphabetic order.
 * @c: The parameter c is been checked for lower or upper case letter.
 * Return: 1 for alphabetic character or 0 for otherwise.
 */

int _isalpha(int c)
{
	if ((c >=  65 && c <=  90) || (c >=  97 && c <=  123))
	{
		return (1);
	}

	return (0);


}
