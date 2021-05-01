#include "lists.h"

/**
 * sum_dlistint - calculate the sum of all elements of a dlistint_t list.
 * @head: pointer to the head of the double linked list.
 *
 * Return: sum of all elements.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
