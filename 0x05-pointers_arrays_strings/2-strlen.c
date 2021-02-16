#include "holberton.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: pointer to string.
 * Return: length of string.
 */
int _strlen(char *s)
{
	int length;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
