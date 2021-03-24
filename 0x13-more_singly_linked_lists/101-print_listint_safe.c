#include "lists.h"

int check_bucle1(const listint_t *head, listint_t *node, int deep);

/**
 * print_listint_safe - prints a listint_t list.
 *
 * @head: pointer to head of list.
 *
 * Return: pointer to the first node of the reversed list.
 */
size_t print_listint_safe(const listint_t *head)
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

		if (!check_bucle1(head, current_node, counter))
		{
			printf("[%p] %d\n", (void *)current_node, current_node->n);
			counter++;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)current_node, current_node->n);
			break;
		}
	} while (current_node->next);

	return (counter);
}

/**
 * check_bucle1 - hold a list with the addres used and check if node is in it.
 *
 * @head: pointer to head of list.
 * @node: node to be cheked.
 * @deep: number of elements to check.
 *
 * Return: 1 if the node is in the list
 */
int check_bucle1(const listint_t *head, listint_t *node, int deep)
{
	if (!head || deep == 0)
		return (0);

	if (head == node)
		return (1);

	return (check_bucle1(head->next, node, deep - 1));
}
