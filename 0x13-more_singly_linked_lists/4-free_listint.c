#include "lists.h"

/**
 * free_listint - deallocate the memory of a list
 *
 * @head: pointer to head of list.
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	if (!head)
		return;

	free_listint(head->next);

	free(head);
}
