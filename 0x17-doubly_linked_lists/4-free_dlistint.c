#include "lists.h"

/**
 * free_dlistint - free the memory of the dlistint_t list.
 * @head: pointer to the head of the double linked list.
 *
 * Return: nothing.
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		while (head->next)
		{
			head = head->next;
			free(head->prev);
		}

		free(head);
	}
}
