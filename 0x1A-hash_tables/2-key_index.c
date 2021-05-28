#include "hash_tables.h"

/**
 * key_index - obtains the index of an key for the given size
 * @key: pointer to string used by key
 * @size: size of the array of pointers to linked lists
 * Return: the index calculated
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size == 0)
	{
		return (0);
	}

	return (hash_djb2(key) % size);
}
