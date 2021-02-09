#include "holberton.h"
/**
 * print_sign - print the sign of number n.
 *
 * @n: integer to be tested.
 * Return: 1 if n is > that 0, -1 if n is < that 0, and 0 sif n is equals to 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
