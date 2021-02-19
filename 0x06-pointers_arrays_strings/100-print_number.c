#include "holberton.h"

/**
  * print_number - prints an integer.
  *
  * @n: integer to be printed;
  * Return: void.
  */
void print_number(int n)
{
	int ultimoDigito = 0;
	int digitos = 0;

	ultimoDigito = n % 10;
	n = n / 10;

	if (ultimoDigito < 0)
	{
		ultimoDigito *= -1;
		n *= -1;
		_putchar('-');
	}

	while (n != 0)
	{
		digitos = (10 * digitos) + (n % 10);
		n /= 10;
	}
	while (digitos != 0)
	{
		_putchar(digitos % 10 + '0');
		digitos /= 10;
	}
	_putchar('0' + ultimoDigito);

}
