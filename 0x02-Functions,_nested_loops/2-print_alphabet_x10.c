#include "holberton.h"

/**
 * print_alphabet_x10 - execute 10 times the function print_alphabet.
 *
 * Return: Always void.
 */
void print_alphabet_x10(void)
{
	int i = 0;

	for (; i < 10; i++)
		print_alphabet();
}
