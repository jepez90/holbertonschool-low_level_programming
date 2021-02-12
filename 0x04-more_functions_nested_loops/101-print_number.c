#include "holberton.h"

/**
 * print_number - prints an integer.
 * 
 * Return: void.
 */
void print_number(int n)
{
	int orden=-1;
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n > 0)
			n *= -1;
		else
			_putchar('-');

		while (n < (orden *= 10));

		while (orden < -1)
		{
			orden = orden / 10;
			_putchar((n/orden) + '0');
			n %= orden;
		}
	}
}
