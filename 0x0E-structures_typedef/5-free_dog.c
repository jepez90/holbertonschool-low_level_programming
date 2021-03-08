#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free memory of the struct dog.
 * @d: pointer to the struct to be freed
 *
 * Return: nothing.
 */
void free_dog(dog_t *d)
{
	if (d->name)
		free(d->name);

	if (d->owner)
		free(d->owner);

	free(d);
}
