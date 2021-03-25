#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: number to be printed in binary format
 *
 * Return: nothing.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1, copy_of_n = n;

	/* find the mask*/
	copy_of_n >>= 1;
	while (copy_of_n)
	{
		mask <<= 1;
		copy_of_n >>= 1;
	}

	/* print he number */
	if (!n)
	{
		_putchar ('0');
	}
	else
	{
		while (mask)
		{
			_putchar ((n & mask) ? '1' : '0');
			mask >>= 1;
		}

	}
}
