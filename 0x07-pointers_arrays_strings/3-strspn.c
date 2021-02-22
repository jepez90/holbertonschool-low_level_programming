#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: pointer to string search in.
 * @accept: character to be searched.
 *
 * Return: int as numbert of bytes of accept in s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int respuesta = 0;

	while (*(s + i) != '\0')
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				respuesta++;
				break;
			}
		}
		i++;
		if (i != respuesta)
			break;
	}

	return (respuesta);
}
