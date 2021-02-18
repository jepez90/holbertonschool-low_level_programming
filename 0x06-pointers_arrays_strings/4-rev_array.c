#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: pointer to array of integers.
 * @n: number of elements.
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int hold;

	n--;

	while (i < n)
	{
		hold = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = hold;
		n--;
		i++;
	}
}
