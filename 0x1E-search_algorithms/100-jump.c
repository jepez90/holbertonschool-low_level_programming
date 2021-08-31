#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers using
 * the Jump search algorithm
 *
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 *
 * Return: the first index where value is located or -1 if value is not present
 * in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t end_of_range = 0, start_of_range, step;
	char *FORMAT_CHECK = "Value checked array[%ld] = [%d]\n";
	char *FORMAT_BETWEEN = "Value found between indexes [%ld] and [%ld]\n";

	if (array != NULL)
	{
		/* calc the size of each jump */
		step = sqrt(size);

		/* calc the first step number greather than value */
		while (end_of_range < size && array[end_of_range] < value)
		{
			printf(FORMAT_CHECK, end_of_range, array[end_of_range]);
			end_of_range += step;
		}

		start_of_range = end_of_range - step;
		printf(FORMAT_BETWEEN, start_of_range, end_of_range);

		/* search the number in the range [start_of_range : end_of_range] */
		while (start_of_range <= end_of_range && start_of_range < size)
		{
			printf(FORMAT_CHECK, start_of_range, array[start_of_range]);
			if (array[start_of_range] == value)
			{
				return (start_of_range);
			}

			start_of_range++;
		}
	}
	return (-1);
}
