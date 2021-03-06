#include "holberton.h"
#include <stdio.h>

/**
 * _strchr -  locates a character in a string.
 *
 * @s: pointer to string search in.
 * @c: character to be searched.
 *
 * Return: pointer to first ocurrence of c in s.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (c == '\0')
		return (s);

	return (NULL);
}
