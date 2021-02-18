#include "holberton.h"

/**
 * _strcmp - compares two strings.
 *
 * @s1: pointer to str 1.
 * @s2: pointer to str 2.
 *
 * Return: -15, 0 or 15 if 1 is lezz, equals or greather than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (1)
	{
		if ((*(s1 + i) != *(s2 + i)) || *(s1 + i) == '\0')
			return (*(s1 + i) - *(s2 + i));
		i++;
	}
}
