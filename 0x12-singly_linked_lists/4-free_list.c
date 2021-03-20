#include "lists.h"

/**
 * free_list - deallocate the memory of a list
 *
 * @head: pointer to head of list.
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	if (!head)
		return;

	free_list(head->next);

	if (head->str)
		free(head->str);
	free(head);
}


