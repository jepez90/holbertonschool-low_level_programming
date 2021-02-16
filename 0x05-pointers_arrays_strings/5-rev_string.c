#include "holberton.h"

/**
 * rev_string - reverses a string.
 *
 * @s: pointer to string.
 * Return: void.
 */
void rev_string(char *s)
{

	char *s1 = s;
	char hold;

	while (*s != '\0')
		s++;
	s--;
	while (s >= s1)
	{
		hold = *s1;
		*s1 = *s;
		*s = hold;

		s1++;
		s--;
	}
}
