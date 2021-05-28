#include "hash_tables.h"

/**
 * hash_table_create - creates a intance of the struct hash_table_t and
 * returns it
 * @size: size of the array of pointers to linked lists
 * Return: the new hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/*
	* TODO:
	* error if size = 0 ?????
	* inicialize at NULL all fields of the array of pointers??????
	*/

	/* Create the space for the hash table */
	hash_table_t *new_hash_table = malloc(sizeof(hash_table_t));

	/* Create the space for the array of size size */
	hash_node_t **array_of_pointers = calloc(size, sizeof(hash_node_t *));

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

		return (new_hash_table);
	}
}
