#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes variable of type 'struct dog'
 * @d: Pointer to struct
 * @name: string representing dog's name
 * @age: a float representing dog's age
 * @owner: owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
