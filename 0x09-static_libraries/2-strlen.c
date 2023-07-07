#include "main.h"

/**
 * _strlen - length of string.
 * @s: string to be counted.
 * Return: length
 */

int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; s++)
		length++;

	return (length);
}
