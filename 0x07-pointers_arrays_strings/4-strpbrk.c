#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: String to search in.
 * @accept: character to be searched.
 *
 * Return: pointer to first  ocurrence of any char in accept.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; *(accept + i) != '\0'; i++)
		{
			if (*s == *(accept + i))
				return (s);
		}
		s++;
	}

	return (0);
}
