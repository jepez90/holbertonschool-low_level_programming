#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal.
 *
 * @n: number of characters _ to be printed;
 * Return: void.
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n-- > 0)
			_putchar('_');
	}

	_putchar('\n');

}
