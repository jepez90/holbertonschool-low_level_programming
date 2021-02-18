#include "holberton.h"

/**
 * _strncat - concatenates two strings.
 *
 * @dest: string to be modified.
 * @src: string to be copied to the end of dest.
 * @n: numbers of chars to be copied from src to dest.
 *
 * Return: pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_index = 0;
	int src_index = 0;

	while (*(dest + dest_index) != '\0')
		dest_index++;

	while (*(src + src_index) != '\0' && src_index < n)
	{
		*(dest + dest_index) = *(src + src_index);
		dest_index++;
		src_index++;
	}

	*(dest + dest_index) = '\0';

	return (dest);


}
