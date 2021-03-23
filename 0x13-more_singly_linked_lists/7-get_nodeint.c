#include "lists.h"

/**
 * get_nodeint_at_index - get the element in the index position.
 *
 * @head: pointer to head of list.
 * @index: index to be returned
 *
 * Return: element in index position or NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);

	if (index == 0)
		return (head);
	else
		return (get_nodeint_at_index(head->next, index - 1));
}
