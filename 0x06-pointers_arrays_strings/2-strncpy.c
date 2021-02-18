#include "holberton.h"

/**
 * *_strncpy - copies a part of the string pointed to by src,
 * to the buffer pointed to by dest.
 *
 * @dest: pointer to str of destination.
 * @src: pointer to str origen.
 * @n: number of caracters to be copied.
 *
 * Return: pointer to a char dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int counter = 0;

	while (*(src + counter) != '\0' && counter < n)
	{
		*(dest + counter) = *(src + counter);
		counter++;
	}

	if (*(src + counter) == '\0')
		*(dest + counter) = '\0';

	return (dest);
}
