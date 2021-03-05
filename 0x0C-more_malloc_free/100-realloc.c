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
	char *result;
	unsigned int i = 0;

	if (old_size == new_size)
		return (ptr);

	if (new_size == 0 && ptr == NULL)
		new_size= old_size;

	result = malloc(new_size * sizeof(result));
	if (result != NULL && ptr != NULL)
	{
		for (i = 0; i < old_size && i < new_size; i++)
			*(result + i) = *((char *)ptr + i);

		/*(result + i) = '\0';*/
	}

	if (ptr != NULL)
		free(ptr);

	return (result);

}