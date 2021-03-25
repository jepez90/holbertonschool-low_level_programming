#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: pointer to strig that countain 0 and 1 chars.
 *
 * Return: number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0, i;

	if (!b)
	{
		return (0);
	}

	/*runs through the string*/
	for (i = 0; b[i]; i++)
	{
		number <<= 1;
		if (b[i] == '0' || b[i] == '1')
		{
			number |= (b[i] - '0');
		}
		else
		{
			return (0);
		}
	}

	return (number);
}
