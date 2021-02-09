#include <stdio.h>
#include "holberton.h"
/**
 * print_natural - prints the sum of multiples of 3 or 5 before 1024.
 *
 * Return: void.
 */
void print_natural(void)
{
	int counter, sum = 0;

	for (counter = 0; counter < 1024; counter++)
	{
		if (counter % 3 == 0 || counter % 5 == 0)
			sum += counter;
	}
	printf("%d\n", sum);
	return;

}
