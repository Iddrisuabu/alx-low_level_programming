#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy - to copy a sting.
 * @src: source string.
 * @dest: destination String.
 * Return: string.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0;

	while (src[i] != '\0')
		i++;

	while (j < i)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

/**
 * _strlen - to determine the length of a string.
 * @s: string used.
 * Return: integer.
 */

int _strlen(char *s)
{
	int b;

	for (b = 0; s[b] != '\0'; s++)
		b++;

	return (b);
}

/**
 * new_dog - a function that creates a new dog.
 * @name: first memeber.
 * @age: second member.
 * @owner: third member.
 *
 * Return: new_dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *joy;
	int n, o;

	o = _strlen(name);
	n = _strlen(owner);

	joy = malloc(sizeof(dog_t));

	if (joy == NULL)
		return (NULL);

	joy->name = malloc(sizeof(char) * (n + 1));

	if (joy->name == NULL)
	{
		free(joy);
		return (NULL);
	}

	joy->owner = malloc(sizeof(owner) * (o + 1));

	if (joy->owner == NULL)
	{
		free(joy);
		free(joy->name);
		return (NULL);
	}

	joy->name = _strcpy(joy->name, name);
	joy->owner = _strcpy(joy->owner, owner);
	joy->age = age;

	return (joy);

}

