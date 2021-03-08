#include "dog.h"

/**
 * init_dog - inicialize the struct dog.
 *
 * @d: pointer to the struct dog.
 * @name: pointer to name
 * @age: value of age
 * @owner: pointer to the
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = name;
	d->age = age;
	d->owner = owner;

}
