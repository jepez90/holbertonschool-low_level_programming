#include "holberton.h"
/**
 * print_last_digit - prints the last digit of n.
 *
 * @n: number for optain it's last digit.
 * Return: always 0.
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	_putchar(n % 10 + '0');
	return (n % 10);
}
