#include "lists.h"

/**
 * print_listint_safe - prints a listint_t list.
 *
 * @head: pointer to head of list.
 *
 * Return: pointer to the first node of the reversed list.
 */
size_t print_listint_safe(const listint_t *head)
{
	list_ptrs *list = NULL;
	listint_t *current_node = NULL;
	int counter = 0;

	if (!head)
		return (0);

	do {
		if (current_node)
			current_node = current_node->next;
		else
			current_node = (listint_t *)head;

		if (!check_bucle(current_node, &list))
		{
			printf("[%p] %d\n", (void *)current_node, current_node->n);
			counter++;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)current_node, current_node->n);
			free_list_ptrs(list);
			break;
		}
	} while (current_node->next);

	return (counter);
}

/**
 * check_bucle - hold a list with the addres used and check if node is in it.
 *
 * @node: node to check.
 * @list: pointer to head of list of used nodes.
 *
 * Return: 1 if the node is in the list
 */
int check_bucle(listint_t *node, list_ptrs **list)
{
	list_ptrs *new_node;

	if (*list)
	{
		if ((*list)->pointer_used == node)
			return (1);

		return (check_bucle(node, &((*list)->next)));
	}

	new_node = malloc(sizeof(list_ptrs));
	if (new_node == NULL)
		exit(98);

	new_node->pointer_used = node;
	new_node->next = NULL;

	/* add new node to end of list*/
	*list = new_node;
	return (0);
}


/**
 * free_list_ptrs - deallocate the memory of a list
 *
 * @head: pointer to head of list.
 *
 * Return: nothing
 */
void free_list_ptrs(list_ptrs *head)
{
	if (!head)
		return;

	free_list_ptrs(head->next);

	free(head);
}
