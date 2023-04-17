#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - begin a variable of a type struct dog
 * @d: dog to be initialized
 * @age: age of dog
 * @owner: owner of dog
 * @name: name of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
