#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - prints all natural numbers from n to 98 followed by a new line
 * @n: integer to start numbers.
 * Return: void.
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d", n);
		}
	}
	else
	{
		for (; n <= 98; n++)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d", n);
		}
	}
	printf("\n");
}
