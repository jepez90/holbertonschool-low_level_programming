#include "holberton.h"
/**
 * print_times_table - prints the times table until number n.
 *
 * @n: number limit of the table;
 * Return: always 0.
 */
void print_times_table(int n)
{
	int x, y, xy;

	if (n >= 0 && n <= 15)
	{
		for (y = 0; y <= n; y++)
		{
			for (x = 0; x <= n; x++)
			{
				xy = x * y;
				if (x == 0)
				{
					_putchar('0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');

					if (xy >= 100)
						_putchar(xy / 100 + '0');
					else
						_putchar(' ');

					if (xy >= 10)
						_putchar((xy / 10) % 10 + '0');
					else
						_putchar(' ');

					_putchar(xy % 10 + '0');

				}
			}
			_putchar('\n');
		}
	}

}
