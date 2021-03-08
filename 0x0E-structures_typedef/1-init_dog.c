#include "dog.h"
#include <stdlib.h>

char *_strdup(char *str);

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

	d->name = _strdup(name);
	d->age = age;
	d->owner = _strdup(owner);

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
