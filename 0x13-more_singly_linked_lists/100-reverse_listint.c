#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list.
 *
 * @head: pointer to head of list.
 *
 * Return: pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	*head = _reverse_listint(head, NULL);
	return (*head);
}


listint_t *_reverse_listint(listint_t **head, listint_t *prev_address)
{
	listint_t *new_head = NULL;

	if (*head)
		new_head = _reverse_listint(&(*head)->next, *head);
	else
		return (prev_address);

	(*head)->next = prev_address;

	return (new_head);
}
