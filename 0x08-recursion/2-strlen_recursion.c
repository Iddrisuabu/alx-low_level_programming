#include "main.h"

/**
 * _strlen_recursion - to determine the length of a string.
 * @s: string to be treated.
 * Return: integer.
 */

int _strlen_recursion(char *s)
{
	/*base case*/
	if (*s == '\0')
		return (0);

	else
		return (1 + _strlen_recursion(s + 1));

}

