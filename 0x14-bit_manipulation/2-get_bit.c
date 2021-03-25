#include "holberton.h"

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
	if (!n)
	{
		return (0);
	}

	while (n)
	{
		if (!index)
		{
			return (n & 1);
		}
		index--;
		n >>= 1;
	}

	return (0);

}
