#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 *
 * @head: pointer to head of list
 * @n: int to add as a new node
 *
 * Return: address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;

	if (*head)
		return (add_nodeint_end(&(*head)->next, n));

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	/* add new node to end of list*/
	*head = new_node;
	return (new_node);

}
