#include "holberton.h"

/**
 * puts2 -  prints every other character of a string, followed by a new line.
 *
 * @str: pointer to string.
 * Return: void.
 */
void puts2(char *str)
{
	int counter = 0;

	while (*str != '\0')
	{
		if (counter % 2 == 0)
			_putchar(*str);
		str++;
		counter++;
	}
	_putchar('\n');
}
