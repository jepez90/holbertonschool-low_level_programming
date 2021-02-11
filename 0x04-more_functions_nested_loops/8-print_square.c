#include "holberton.h"

/**
 *  print_square -  prints a square, followed by a new line.
 *
 * @size: is the size of the square;
 * Return: void.
 */
void print_square(int size)
{
	int row = size;
	int column;

	if (size > 0)
	{
		while (row-- > 0)
		{
			column = size;
			while (column-- > 0)
				_putchar('#');

			_putchar('\n');
		}
	}

	_putchar('\n');

}
