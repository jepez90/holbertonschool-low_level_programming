#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers using the
 * jump search algorithm.
 *
 * @list: is a pointer to the head of the list to search in.
 * @size: is the number of nodes in list.
 * @value: is the value to search for.
 *
 * Return: the first index where value is located or -1 if value is not present
 * in array or if array is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, j;
	char *FORMAT_CHECK = "Value checked at index [%ld] = [%d]\n";
	char *FORMAT_BETWEEN = "Value found between indexes [%ld] and [%ld]\n";

	listint_t *left = NULL, *right = NULL;

	if (list != NULL)
	{
		/* calc the size of each jump */
		step = sqrt(size);

		/* calc the first step number greather than value */
		right = list;
		while (right->next != NULL && right->n < value)
		{
			left = right;
			for (j = 0; right->next != NULL && j < step; j++)
			{
				right = right->next;
			}
			printf(FORMAT_CHECK, right->index, right->n);
		}

		printf(FORMAT_BETWEEN, left->index, right->index);

		/* search the number in the range [left : right] */
		while (left != NULL && left->index <= right->index)
		{
			printf(FORMAT_CHECK, left->index, left->n);
			if (left->n == value)
			{
				return (left);
			}

			left = left->next;
		}
	}
	return (NULL);
}
