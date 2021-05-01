#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the head of the double linked list.
 * @n: number to be stored in the new node.
 *
 * Return: new node or NULL.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current = *head;

	if (head == NULL)
		return (NULL);

	/* create the new node */
	new = malloc(sizeof(dlistint_t));
	new->next = NULL;
	new->n = n;

	/* insert the new node */
	if (current)
	{
		/* look for the last node */
		while (current->next)
			current = current->next;

		current->next = new;
		new->prev = current;
	}
	else
	{
		new->prev = NULL;
		*head = new;
	}
	return (new);
}
