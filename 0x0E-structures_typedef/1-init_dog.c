#include "dog.h"

/**
 * init_dog - initialize variable
 * @d: ptr struct
 * @name: dog name
 * @age: ager of dog
 * @owner: owner of dog
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
