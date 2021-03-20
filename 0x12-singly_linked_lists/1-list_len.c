#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list.
 *
 * @h: pointer to head of list
 *
 * Return: num of elemments of the linked list
 */
size_t list_len(const list_t *h)
{
	if (!h)
		return (0);

	return (list_len(h->next) + 1);
}
