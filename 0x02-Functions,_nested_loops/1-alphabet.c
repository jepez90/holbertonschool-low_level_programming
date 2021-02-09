#include "holberton.h"

/**
 * print_alphabet - print the alphabet in lowercase followed a new line.
 *
 * Return: Always 0 as success.
 */
void print_alphabet(void)
{
	char letter = 'a';

	for (; letter <= 'z' ; letter++)
		_putchar(letter);
	_putchar(10);
}
