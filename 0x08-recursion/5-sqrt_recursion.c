#include "holberton.h"

/**
 * __sqrt_recursion - returns the natural square root of a number.
 *
 * @n: number to calculate its sqrt
 * @x: sxrt posible
 *
 * Return: sqrt of n
 */
int __sqrt_recursion(int n, int x)
{

	if ((x * x) == n)
		return (x);
	else if (x * x > n)
		return (-1);
	else
		return (__sqrt_recursion(n, x + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: number to calculate its sqrt
 *
 * Return: sqrt of n
 */
int _sqrt_recursion(int n)
{
	return (__sqrt_recursion(n, 1));
}
