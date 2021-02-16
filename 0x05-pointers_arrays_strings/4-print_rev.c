#include "holberton.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: pointer to string.
 * Return: void.
 */
void print_rev(char *s)
{
	char *s1 = s;

	while (*s != '\0')
		s++;

	s--;

	while (s >= s1)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
