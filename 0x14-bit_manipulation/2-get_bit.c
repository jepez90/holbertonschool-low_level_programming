#include "holberton.h"
#include <limits.h>

/**
 * get_bit -  returns the value of a bit at a given index.
 *
 * @n: number that countain the bits
 * @index: specific bit to be returned;
 *
 * Return: the value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long max_length;

	if (!n)
	{
		return (0);
	}

	max_length = (unsigned long)LONG_MAX + 1;

	while (max_length)
	{
		if (!index)
		{
			return (n & 1);
		}
		index--;
		n >>= 1;
		max_length >>= 1;
	}

	return (-1);

}
