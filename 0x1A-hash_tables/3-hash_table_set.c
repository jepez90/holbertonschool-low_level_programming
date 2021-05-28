#include "hash_tables.h"

/**
 * hash_table_set - insets or update an key-value in the hash table.
 * @ht: pointer to the hash table
 * @key: pointer to string used by key
 * @value: pointer to the new value for the given key
 * Return: 1 if succes, 0 if error
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL, *current_node;
	int index;

	if (ht == NULL || key == NULL || key[0] == '\0' || value == NULL)
		return (0);

	/* search for for key in the list at index */
	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			/* if the key already exist, update its value */
			free(current_node->value);
			current_node->value = strdup(value);

			return (1);
		}

		current_node = current_node->next;
	}

	/* create the new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->value == NULL || new_node->key == NULL)
		return (0);

	/* add the new node at begin of the list in index position */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
