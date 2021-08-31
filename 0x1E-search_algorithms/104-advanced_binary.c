#include "search_algos.h"

void print_array(int *array, size_t size);

/**
 * advanced_binary - searches for a value in a sorted array of integers using
 * the Binary search algorithm with recursion
 *
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 *
 * Return: the first index where value is located or -1 if value is not present
 * in array or if array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t index, L = 0, R = size;
	int index_found;

	if (array == NULL || size == 0)
		return (-1);

	print_array(array, size);

	if (size == 1)
	{
		if (array[0] == value)
			return (0);
		else
			return (-1);
	}

	index = size / 2;

	if (array[index] < value)
	{
		L = index + 1;
	}
	else
	{
		R = index;
	}
	index_found = advanced_binary(array + L, R - L, value);
	if (index_found != -1)
		index_found += L;

	return (index_found);
}

/**
 * print_array - prints an array of integers
 *
 * @array: is a pointer to the first element of the array to print.
 * @size: is the number of elements in array.
 *
 * Return: nothing
 */
void print_array(int *array, size_t size)
{
	size_t index;
	char *format = "Searching in array: %d";

	for (index = 0; index < size; index++)
	{
		printf(format, array[index]);
		if (index == 0)
			format = ", %d";
	}
	printf("\n");
}
