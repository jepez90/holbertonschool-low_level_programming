#include "lists.h"

/**
 * listint_len - obtains the number of elements of a listint_t list.
 *
 * @h: pointer to head of list.
 *
 * Return: num of elemments in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	if (!h)
		return (0);

	return (listint_len(h->next) + 1);
}
