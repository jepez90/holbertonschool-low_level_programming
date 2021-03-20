#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 *
 * @head: pointer to head of list
 * @str: string to add as new node
 *
 * Return: list with node added
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int str_len = 0;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	for (str_len = 0; str[str_len]; str_len++)
		{}

	new_node->str = strdup(str);
	new_node->len = str_len;
	new_node->next = *head;

	*head = new_node;

	return (*head);
}
