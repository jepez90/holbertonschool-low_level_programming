#include "lists.h"

/**
 * delete_dnodeint_at_index - remove a new node at the given position of list.
 * @head: pointer to the head of the double linked list.
 * @index: index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	if (head == NULL)
		return (-1);

	while (index-- != 0)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
	}

	if (current)
	{
		if (current->prev)
			current->prev->next = current->next;
		else
			*head = current->next;
		if (current->next)
			current->next->prev = current->prev;

		free(current);
		return (1);
	}

	return (-1);
}

