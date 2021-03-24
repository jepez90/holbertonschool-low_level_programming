#include "lists.h"

/**
 * free_listint2 - deallocate the memory of a list.
 *
 * @head: pointer to head of list.
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	if (!head)
		return;
	if (!*head)
		return;

	free_listint2(&(*head)->next);

	free(*head);
	*head = NULL;
}
