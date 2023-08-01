#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: Pointer to the struct dog variable to initialize.
 * @name: The name of the dog to set.
 * @age: The age of the dog to set.
 * @owner: The name of the owner of the dog to set.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

