#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at the index position in the list
 *
 * @head: pointer to pointer to head of list
 * @index: position of the node to be deleted
 *
 * Return: 1 on succes or -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node_to_remove;

	if (*head && index > 0)
		return (delete_nodeint_at_index(&(*head)->next, index - 1));

	if (!*head)
		return (-1);

	node_to_remove = *head;

	*head = node_to_remove->next;
	free(node_to_remove);
	return (1);
}
