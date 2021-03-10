#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 *
 * @array: pointer to an array of numbers
 * @size: number of elements of the array
 * @cmp: function to be called for print each number
 *
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
			return (index);
	}
	return (-1);
}
