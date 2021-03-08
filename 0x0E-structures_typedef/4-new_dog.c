#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str);

/**
 * new_dog - create a new dog.
 *
 * @name: pointer to name
 * @age: value of age
 * @owner: pointer to the
 *
 * Return: pointer to the new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *baby_dog;

	baby_dog = malloc(sizeof(dog_t));
	if (baby_dog == NULL)
		return (NULL);

	baby_dog->name = _strdup(name);
	if (baby_dog->name  == NULL)
	{

		return (NULL);
	}

	baby_dog->owner = _strdup(owner);
	if (baby_dog->owner  == NULL)
	{

		return (NULL);
	}

	baby_dog->age = age;

	return (baby_dog);
}


/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: String to be copied
 *
 * Return: pointer to the array
 */
char *_strdup(char *str)
{
	char *resultado;
	int str_len, i;

	if (str == NULL)
		return (NULL);

	for (str_len = 0; str[str_len]; str_len++)
	{}
	str_len++;
	resultado = malloc(sizeof(char) * str_len);
	if (resultado == NULL)
		return (NULL);

	for (i = 0; i <= str_len ; i++)
	{
		resultado[i] = str[i];
	}
	resultado[str_len] = '\0';

	return (resultado);
}
