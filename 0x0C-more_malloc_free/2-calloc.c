#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc -  allocates memory for an array, using malloc.
 *
 * @nmemb: elements to be allocate
 * @size: size of elements
 *
 * Return: pointer to the string result
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;
	unsigned int  i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	result = malloc(nmemb * size);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		result[i] = '\0';

	return (result);
}
