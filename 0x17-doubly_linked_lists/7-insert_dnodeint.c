#include "lists.h"

/**
 * insert_dnodeint_at_index - adds a new node at the given position of a list.
 * @h: pointer to the head of the double linked list.
 * @idx: index of the list where the new node should be added starting at 0.
 * @n: number to be stored in the new node.
 *
 * Return: new node or NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current = *h;

	if (h == NULL)
		return (NULL);

	/* create the new node */
	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	/* insert the new node */
	if (idx == 0)
	{
		if (*h)
			(*h)->prev = new;
		new->next = *h;
		*h = new;
		return (new);
	}

	while (--idx != 0)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
	}

	if (current)
	{
		new->next = current->next;
		new->prev = current;
		current->next = new;
		if (new->next)
			new->next->prev = new;
		return (new);
	}
	return (NULL);

}
