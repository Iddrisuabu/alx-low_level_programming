#include "main.h"

int _palindrome(char *s, int i, int len);
int _strlen(char *s);

/**
 * is_palindrome - return if a string is a palindrome
 * @s: string used
 * Return: integer.
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_palindrome(s, 0, _strlen(s)));
}

/**
 * _strlen - returns the length of a string
 * @s: string length.
 * Return: integer.
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * _palindrome - determine palindrome of a string.
 * @s: string checked
 * @i: iterator
 * @len: length of the string
 * Return: integer
 */

int _palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (_palindrome(s, i + 1, len - 1));
}

