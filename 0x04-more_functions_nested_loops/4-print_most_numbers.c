#include "holberton.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * witout 2 and 4 followed by a new line..
 *
 * Return: void.
 */
void print_most_numbers(void)
{
	int digit = 0;

	while (digit < 10)
	{
		if (digit != 2 && digit != 4)
			_putchar(digit + '0');

		digit++;
	}
	_putchar('\n');

}
