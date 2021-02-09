#include "holberton.h"
/**
 * times_table - prints the time table.
 *
 * Return: always 0.
 */
void times_table(void)
{
	int x, y, xy;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 10; x++)
		{
			xy = x * y;
			if (x != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (xy > 9)
			{
				_putchar(xy / 10 + '0');
				_putchar(xy % 10 + '0');
			}
			else
			{
				if (x != 0 ) 
					_putchar(' ');

				_putchar(xy % 10 + '0');
			}
		}
		_putchar(10);
	}

}
