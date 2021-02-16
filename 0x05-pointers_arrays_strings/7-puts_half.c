#include "holberton.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 *
 * @str: pointer to string.
 * Return: void.
 */
void puts_half(char *str)
{
	int counter = 0;

	while (*str != '\0')
	{
		counter++;
		str++;
	}

	str -= (counter / 2);

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
