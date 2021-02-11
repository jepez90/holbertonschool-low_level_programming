#include "holberton.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 *
 * @size: is the size of the triangle.
 * Return: void.
 */
void print_triangle(int size)
{
	int row = size;
	int column;

	if (size > 0)
	{
		while (row-- > 0)
		{
			column = size;
			while (column-- > 0)
				if ((size - column) < row + 1)
					_putchar(' ');
				else
					_putchar('#');

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
