#include "holberton.h"
#include <limits.h>

/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another.
 *
 * @n: first number.
 * @m: second number.
 *
 * Return:  the number of bits you would need to flip to get
 * from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;

	n ^= m;
	while (n)
	{
		if (n & 1)
		{
			counter++;
		}
		n >>= 1;
	}

	return (counter);
}
