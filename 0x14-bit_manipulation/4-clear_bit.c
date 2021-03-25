#include "holberton.h"
#include <limits.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 *
 * @n: pointer to number to be modified
 * @index: specific bit to be set to 0;
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long mask = 1, max_length;

	max_length = (unsigned long)LONG_MAX + 1;

	while (max_length)
	{
		if (!index)
		{
			*n |= mask;
			*n ^= mask;
			return (1);
		}

		index--;
		mask <<= 1;
		max_length >>= 1;
	}

	return (-1);
}
