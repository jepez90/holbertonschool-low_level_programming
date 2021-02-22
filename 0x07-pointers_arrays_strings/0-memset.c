#include "holberton.h"

/**
 * _memset - fills memory with a constant byte.
 *
 * @s: pointer to memory to be filled.
 * @b: char used to fill memory.
 * @n: number of positions to be filled.
 *
 * Return: pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
