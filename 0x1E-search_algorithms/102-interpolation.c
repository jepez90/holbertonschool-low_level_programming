#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 *
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 *
 * Return: the first index where value is located or -1 if value is not present
 * in array or if array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t index, range_begin = 0, range_end = size - 1;
	double m;
	char *FORMAT_CHECK = "Value checked array[%ld] = [%d]\n";

	if (array != NULL)
	{
		while (range_begin <= range_end)
		{
			/*y = mx + b*/
			m = (double)(range_end - range_begin) / (array[range_end] - array[range_begin]);
			index = (m * (value - array[range_begin])) + range_begin;

			if (index >= size)
			{
				printf("Value checked array[%ld] is out of range)\n", index);
				break;
			}

			printf(FORMAT_CHECK, index, array[index]);

			/*index = range_begin + (((double)(range_end - range_begin) / (array[range_end] - array[range_begin])) * (value - array[range_begin]));*/
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
