#include "search_algos.h"

void print_array(int *array, size_t size);

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 *
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 *
 * Return: the first index where value is located or -1 if value is not present
 * in array or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t range_end = 0, range_start, index;
	char *FORMAT_CHECK = "Value checked array[%ld] = [%d]\n";
	char *FORMAT_BETWEEN = "Value found between indexes [%ld] and [%ld]\n";

	if (array != NULL && size != 0)
	{
		/* calc the size of each jump */
		range_end = 1;

		/* calc the first step number greather than value */
		while (range_end < size && array[range_end] < value)
		{
			printf(FORMAT_CHECK, range_end, array[range_end]);
			range_end *= 2;
		}

		range_start = range_end / 2;
		/* corrects the end */
		if (range_end >= size)
			range_end = size - 1;

		printf(FORMAT_BETWEEN, range_start, range_end);

		/* search the number in the range [range_start : range_end] */
		/* perform a binary search */
		while (range_start < range_end)
		{
			print_array(array + range_start, range_end - range_start + 1);

			index = (range_end + range_start) / 2;

			if (array[index] == value)
				return (index);
			else if (array[index] < value)
				range_start = index + 1;
			else
				range_end = index - 1;
		}
	}
	return (-1);
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
