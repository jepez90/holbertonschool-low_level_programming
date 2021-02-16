#include "holberton.h"

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: pointer to number to be changed
 * @b: pointer to number to be changed
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int hold;

	hold = *a;
	*a  = *b;
	*b = hold;
}
