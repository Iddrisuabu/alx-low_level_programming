#include "dog.h"
#include <stdlib.h>

/**
  * _strlen - Returns the length of a string
  * @s: string to count
  * Return: string length
  */
int _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
	{
		i++;
	}

	return (i);
}

/**
  * _strcpy - Copy a string
  * @dest: destination value
  * @src: Source.
  * Return: pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of dog
 * Return: pointer to the new dog (Success), NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, j;

	i = _strlen(name);
	j = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (i + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (j + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

