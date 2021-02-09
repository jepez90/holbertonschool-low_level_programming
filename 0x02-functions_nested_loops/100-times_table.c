#include <stdio.h>
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

	if (n <= 0 || n > 15)
		return;

	for (y = 0; y <= n; y++)
	{
		for (x = 0; x <= n; x++)
		{
			xy = x * y;
			if (x == 0)
				printf("0");
			else if (xy < 10)
				printf(",   %d", xy);
			else if (xy < 100)
				printf(",  %d", xy);
			else
				printf(", %d", xy);
		}
		printf("\n");
	}
	return;

}
