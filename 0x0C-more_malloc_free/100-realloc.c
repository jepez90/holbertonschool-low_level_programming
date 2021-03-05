#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free.
 *
 * @ptr: pointer to be reallocated
 * @old_size: initial size of ptr
 * @new_size: final size of ptr
 *
 * Return: pointer to the string result
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *result = NULL;
	unsigned int i = 0;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	result = malloc(new_size);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		result[i] = *((char *)ptr + i);

	free(ptr);

	return (result);

}
