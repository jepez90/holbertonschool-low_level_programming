#include "lists.h"

/**
 * insert_nodeint_at_index - adds a new node at the index position in the list.
 *
 * @head: pointer to pointer to head of list
 * @idx: position where the new node should be inserted
 * @n: number to be inserted as new node
 *
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;

	if (*head && idx > 0)
		return (insert_nodeint_at_index(&(*head)->next, idx - 1, n));

	if (!*head && idx > 0)
		return (NULL);


	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
