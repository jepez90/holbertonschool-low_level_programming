#include "hash_tables.h"

/**
 * hash_table_delete - remove all elements in the hash table, the array
 * and the list
 * @ht: pointer to the hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int index;
	hash_node_t *current_node, *temp_node;

	if (ht != NULL)
	{
		for (index = 0; index < ht->size; index++)
		{
			current_node = ht->array[index];
			while (current_node != NULL)
			{
				temp_node = current_node;
				current_node = current_node->next;

				if (temp_node->value != NULL)
					free(temp_node->value);
				if (temp_node->key != NULL)
					free(temp_node->key);
				free(temp_node);
			}
		}
		free(ht->array);
		free(ht);
	}
}
