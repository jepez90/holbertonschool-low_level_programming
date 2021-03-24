#include "lists.h"

int check_bucle3(const listint_t *head, listint_t *node, int deep);

/**
 * find_listint_loop - prints a listint_t list.
 *
 * @head: pointer to head of list.
 *
 * Return: address of the node where loop starts or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *current_node = NULL;
	int counter = 0;

	if (!head)
		return (0);

	do {
		if (current_node)
			current_node = current_node->next;
		else
			current_node = (listint_t *)head;

		if (!check_bucle3(head, current_node, counter))
			counter++;
		else
			return (current_node);
	} while (current_node->next);

	return (NULL);
}

/**
 * check_bucle3 - hold a list with the addres used and check if node is in it.
 *
 * @head: pointer to head of list.
 * @node: node to be cheked.
 * @deep: number of elements to check.
 *
 * Return: 1 if the node is in the list
 */
int check_bucle3(const listint_t *head, listint_t *node, int deep)
{
	if (!head || deep == 0)
		return (0);

	if (head == node)
		return (1);

	return (check_bucle3(head->next, node, deep - 1));
}
