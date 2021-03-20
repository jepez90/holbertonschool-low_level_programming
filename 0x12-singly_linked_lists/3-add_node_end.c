#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 *
 * @head: pointer to head of list
 * @str: string to add as a new node
 *
 * Return: list with node added
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	int str_len;

	if (*head)
		return (add_node_end(&(*head)->next, str));

	/* create new node */
	for (str_len = 0; str[str_len]; str_len++)
		{}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = str_len;
	new_node->next = NULL;

	/* add new node to end of list*/
	*head = new_node;
	return (new_node);

}
