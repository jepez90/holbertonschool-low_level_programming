#include "lists.h"

int check_bucle2(const listint_t *head, listint_t *node, int deep);

size_t _free_listint_safe(listint_t **head, listint_t *current_node, int deep);

/**
 * free_listint_safe - prints a listint_t list.
 *
 * @h: pointer to head of list.
 *
 * Return: number of free elements
 */
size_t free_listint_safe(listint_t **h)
{
	int count = 0;

	if (!h)
		return (0);
	if (!*h)
		return (0);

	count = _free_listint_safe(h, (*h)->next, 0);

	free(*h);
	*h = NULL;

	return (count);
}

/**
 * _free_listint_safe - prints a listint_t list.
 *
 * @head: pointer to head of list.
 * @current_node: node to be cheked.
 * @deep: number of elements to check.
 *
 * Return: pointer to the first node of the reversed list.
 */
size_t _free_listint_safe(listint_t **head, listint_t *current_node, int deep)
{
	if (!current_node)
		return (deep);

	if (!check_bucle2((const listint_t *)*head, current_node, deep))
		deep = _free_listint_safe(head, current_node->next, deep + 1);

	free(*head);
	*head = NULL;
	return (deep);
}

/**
 * check_bucle2 - hold a list with the addres used and check if node is in it.
 *
 * @head: pointer to head of list.
 * @node: node to be cheked.
 * @deep: number of elements to check.
 *
 * Return: 1 if the node is in the list
 */
int check_bucle2(const listint_t *head, listint_t *node, int deep)
{
	if (!head || deep <= 0)
		return (0);

	if (head == node)
		return (1);

	return (check_bucle2(head->next, node, deep - 1));
}
