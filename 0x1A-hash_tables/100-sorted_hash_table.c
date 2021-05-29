#include "hash_tables.h"

/**
 * shash_table_create - creates a intance of the struct hash_table_t and
 * returns it
 * @size: size of the array of pointers to linked lists
 * Return: the new hash table or NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	/* Create the space for the hash table */
	shash_table_t *new_hash_table = malloc(sizeof(shash_table_t));

	/* Create the space for the array of size size */
	shash_node_t **array_of_pointers = calloc(size, sizeof(shash_node_t *));

	/* check if the malloc function did run ok */
	if (new_hash_table == NULL || array_of_pointers == NULL)
	{
		return (NULL);
	}
	else
	{
		/* inicialize the hash table and the array */
		new_hash_table->size = size;
		new_hash_table->array = array_of_pointers;
		new_hash_table->shead = NULL;
		new_hash_table->stail = NULL;

		return (new_hash_table);
	}
}


/**
 * shash_table_set - insets or update an key-value in the hash table.
 * @ht: pointer to the hash table
 * @key: pointer to string used by key
 * @value: pointer to the new value for the given key
 * Return: 1 if succes, 0 if error
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node = NULL, *current_node;
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
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->value == NULL || new_node->key == NULL)
		return (0);

	/* add the new node at begin of the list in index position */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (inset_in_order_list(ht, new_node));

}


/**
 * inset_in_order_list - insert the node in the ordered double linked list.
 * @ht: pointer to the hash table
 * @new_node: node to be inserted
 * Return: 1 if succes, 0 if error
 */
int inset_in_order_list(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *current_node;

	current_node = ht->shead;
	if (current_node == NULL)
	{/* the list is void, is the first node */
		ht->shead = new_node;
		new_node->snext = NULL;
		ht->stail = new_node;
		new_node->sprev = NULL;
		return (1);
	}
	else
	{
		while (current_node != NULL)
		{
			if (strcmp(current_node->key, new_node->key) > 0)
			{   /* insert the node before of the current node */
				new_node->snext = current_node;
				new_node->sprev = current_node->sprev;
				if (current_node->sprev)
					current_node->sprev->snext = new_node;
				else
					ht->shead = new_node;
				current_node->sprev = new_node;

				return (1);
			}
			current_node = current_node->snext;
		}

		/* is the last node */
		new_node->snext = NULL;
		new_node->sprev = ht->stail;
		ht->stail->snext = new_node;
		ht->stail = new_node;

		return (1);
	}
}

/**
 * shash_table_get - gets the value for an given index
 * @ht: pointer to the hash table
 * @key: pointer to string used by key
 * Return: value for the given key or null if kei doesn't exists
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	int index;
	shash_node_t *current_node;

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


/**
 * shash_table_print - prints all elements in the hash table in asc order
 * @ht: pointer to the hash table
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	char *delimiter = "";
	shash_node_t *current_node;

	if (ht != NULL)
	{
		printf("{");
		current_node = ht->shead;
		while (current_node != NULL)
		{
			printf("%s'%s': '%s'", delimiter, current_node->key, current_node->value);
			current_node = current_node->snext;
			delimiter = ", ";
		}
		printf("}\n");
	}
}


/**
 * shash_table_print_rev - prints all elements in the hash table in rev order
 * @ht: pointer to the hash table
 * Return: nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	char *delimiter = "";
	shash_node_t *current_node;

	if (ht != NULL)
	{
		printf("{");
		current_node = ht->stail;
		while (current_node != NULL)
		{
			printf("%s'%s': '%s'", delimiter, current_node->key, current_node->value);
			current_node = current_node->sprev;
			delimiter = ", ";
		}
		printf("}\n");
	}
}


/**
 * shash_table_delete - remove all elements in the hash table, the array
 * and the list
 * @ht: pointer to the hash table
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current_node, *temp_node;

	if (ht != NULL)
	{
		current_node = ht->shead;
		while (current_node != NULL)
		{
			temp_node = current_node;
			current_node = current_node->snext;

			if (temp_node->value != NULL)
				free(temp_node->value);
			if (temp_node->key != NULL)
				free(temp_node->key);
			free(temp_node);

		}

		free(ht->array);
		free(ht);
	}
}
