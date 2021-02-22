#include "holberton.h"

/**
 * _memcpy - copies memory area.
 *
 * @dest: pointer to memory to be filled.
 * @src: pointer to the memory to be copied.
 * @n: number of positions to be filled.
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
