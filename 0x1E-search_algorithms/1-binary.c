#include "search_algos.h"

void print_array(int *array, size_t size);

/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 * Return: the first index where value is located or -1 if value is not present
 * in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t index, range_begin = 0, range_end = size - 1;

	if (array != NULL)
	{
		while (range_begin <= range_end)
		{
			print_array(array + range_begin, range_end - range_begin + 1);

			index = (range_end + range_begin) / 2;

			if (array[index] == value)
				return (index);
			else if (array[index] < value)
				range_begin = index + 1;
			else
				range_end = index - 1;
		}
	}
	return (-1);
}

/**
 * print_array - prints an array of integers
 * @array: is a pointer to the first element of the array to print.
 * @size: is the number of elements in array.
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
