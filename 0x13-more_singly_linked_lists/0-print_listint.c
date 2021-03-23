#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 *
 * @h: pointer to head of list
 *
 * Return: num of printed elemments
 */
size_t print_listint(const listint_t *h)
{
	if (!h)
		return (0);

	printf("%d\n", h->n);

	return (print_listint(h->next) + 1);
}
