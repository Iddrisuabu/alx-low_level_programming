#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function to initiate a variable of type struct dog.
 * @d: pointer to the dog structure.
 * @name: name to be initialized.
 * @age: age to be initialized.
 * @owner: owner to be initialized.
 * Return: 0 on success.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}

}
