#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Freeing all pointers to a structs regarding dog
 * @d: Pointer to specified struct
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
