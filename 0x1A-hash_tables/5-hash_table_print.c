#include "hash_tables.h"

/**
 * hash_table_print - prints all elements in the hash table
 * @ht: pointer to the hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int index;
	char *delimiter = "";
	hash_node_t *current_node;
	if (ht != NULL)
	{
		printf("{");
		for (index = 0; index < ht->size; index++)
		{
			current_node = ht->array[index];
			while (current_node != NULL)
			{
				printf("%s%s: %s", delimiter, current_node->key, current_node->value);
				current_node = current_node->next;
				delimiter = (*delimiter == '\0') ? ", " : delimiter;
			}
		}
		printf("}\n");
	}
}
