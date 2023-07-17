#ifndef dog_h
#define dog_h

/**
 * struct dog - details of dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 *
 * Description: long description.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
