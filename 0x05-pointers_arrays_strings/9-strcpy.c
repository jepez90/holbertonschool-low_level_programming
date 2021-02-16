#include "holberton.h"

/**
 * *_strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: pointer to str of destination.
 * @src: pointer to str origen.
 * Return: pointer to a char.
 */
char *_strcpy(char *dest, char *src)
{
	int counter = 0;

	while (*(src + counter) != '\0')
	{
		*(dest + counter) = *(src + counter);
		counter++;
	}

	*(dest + counter) = '\0';

	return (dest);
}
