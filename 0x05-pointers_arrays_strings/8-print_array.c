#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers, followed by a n l.
 *
 * @a: pointer to array.
 * @n: elements to be printed.
 * Return: void.
 */
void print_array(int *a, int n)
{
	int counter = 1;

	while (counter <= n)
	{
		if (counter != 1)
			printf(", ");
		printf("%d", *a);
		counter++;
		a++;
	}

	printf("\n");
}
