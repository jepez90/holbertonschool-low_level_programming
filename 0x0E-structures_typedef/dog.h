#ifndef INIT_DOG_H
#define INIT_DOG_H

/**
 * struct dog - countain info of a dog
 * @name: pointer to name of dog
 * @age: age
 * @owner: pointer to string owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif /* INIT_DOG_H */
