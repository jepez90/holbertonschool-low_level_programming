#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers.
 *
 * @list: pointer to the head of the skip list to search in.
 * @value: is the value to search for.
 *
 * Return: the first node where value is located or NULL if value is not
 * present in list or if list is NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	char *FORMAT_CHECK = "Value checked at index [%ld] = [%d]\n";
	char *FORMAT_BETWEEN = "Value found between indexes [%ld] and [%ld]\n";
	skiplist_t *left = NULL, *right = NULL;

	if (list != NULL)
	{
		/* search for nodes around the target with express lane */
		right = list;
		while (right->n < value)
		{
			left = right;
			if (right->express != NULL)
			{
				right = right->express;
			}
			else
			{
				/*if the express lane is null, search the last node*/
				while (right->next != NULL)
				{
					right = right->next;
				}
				break;
			}
			printf(FORMAT_CHECK, right->index, right->n);
		}

		printf(FORMAT_BETWEEN, left->index, right->index);

		/* search the number in the range [left : right] */
		while (left != NULL && left->index <= right->index)
		{
			printf(FORMAT_CHECK, left->index, left->n);
			if (left->n == value)
				return (left);

			left = left->next;
		}
	}
	return (NULL);
}
