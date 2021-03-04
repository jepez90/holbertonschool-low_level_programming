#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers.
 *
 * @min: elements to be allocate
 * @max: size of elements
 *
 * Return: pointer to the string result
 */
int *array_range(int min, int max)
{
	int *result;
	int  i;

	if (min > max)
		return (NULL);

	result = malloc(sizeof(int) * (max - min + 1));
	if (result == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		result[i - min] = i;

	return (result);
}
