#include "lists.h"

/**
 * pop_listint - remove the head element of the list and return it.
 *
 * @head: pointer to head of list
 *
 * Return: element removed of the list
 */
int pop_listint(listint_t **head)
{
	listint_t *old_first_node;
	int element_to_return;

	if (!*head || !head)
		return (0);

	element_to_return = (*head)->n;
	old_first_node = *head;

	*head = old_first_node->next;

	free(old_first_node);
	return (element_to_return);
}
