#include "lists.h"

/**
 * sum_listint - obtains the sum of all elements in the listint_t list
 *
 * @head: pointer to head of list.
 *
 * Return: sum of all of elemments in the listint_t list.
 */
int sum_listint(listint_t *head)
{
	if (!head)
		return (0);

		return (sum_listint(head->next) + head->n);
}
