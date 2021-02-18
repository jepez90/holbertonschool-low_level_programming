#include "holberton.h"

/**
 * _strcat - concatenates two strings.
 *
 * @dest: string to be modified.
 * @src: string to be copied to the end of dest.
 *
 * Return: pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int cursor = 0;

	for (; *(dest + cursor) != '\0'; cursor++)
	{
	}
	for (; *src != '\0'; src++)
	{
		*(dest + cursor) = *src;
		cursor++;
	}
	*(dest + cursor) = *src;

	return (dest);


}
