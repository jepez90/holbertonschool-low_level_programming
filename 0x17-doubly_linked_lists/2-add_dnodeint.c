#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to the head of the double linked list.
 * @n: number to be stored in the new node.
 *
 * Return: new node or NULL.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *first = *head;

	if (head == NULL)
		return (NULL);

	/* create the node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	/* add the new node to the list */
	*head = new;
	new->next = first;

	if (first == NULL)
		new->prev = NULL;
	else
		first->prev = new;

	return (new);

}
