#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: number of characters \ to be printed;
 */
void print_diagonal(int n)
{
	int x;
	int y;

	if (n<=0)
	{
		_putchar('\n');
		return;
	}

	for (y = 0; y < n; y++)
	{
		for (x = 0; x < y; x++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');

	}


}
