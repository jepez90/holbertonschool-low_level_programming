#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 *
 * @h: pointer to head of list
 *
 * Return: num of elemments printed
 */
size_t print_list(const list_t *h)
{
	if (!h)
		return (0);

	if (h->str)
		printf("[%d] %s\n", h->len, h->str);
	else
		printf("[0] (nil)\n");

	return (print_list(h->next) + 1);
}


