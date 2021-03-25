#include "holberton.h"
#include <stdio.h>

/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	int test = '+';
	char *ptr_int;

	ptr_int = (char *)&test;
	if ((*ptr_int) == '+')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
