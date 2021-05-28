#include "hash_tables.h"

/**
 * hash_table_get - gets the value for an given index
 * @ht: pointer to the hash table
 * @key: pointer to string used by key
 * Return: value for the given key or null if kei doesn't exists
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *current_node;

	if (ht == NULL || key == NULL || key[0] == '\0')
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);

	current_node = ht->array[index];
	/* search for for key in the list at index */
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			return (current_node->value);
		}
		current_node = current_node->next;
	}

	return (NULL);

}
