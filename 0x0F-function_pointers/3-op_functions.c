#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - sum two numbers.
 *
 * @a: number 1
 * @b: number 2
 *
 * Return: sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - rest two numbers.
 *
 * @a: number 1
 * @b: number 2
 *
 * Return: rest of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers.
 *
 * @a: number 1
 * @b: number 2
 *
 * Return: multiply of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two numbers.
 *
 * @a: number 1
 * @b: number 2
 *
 * Return: div of a and b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - obtain the mod of two numbers.
 *
 * @a: number 1
 * @b: number 2
 *
 * Return: mod of a and b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
