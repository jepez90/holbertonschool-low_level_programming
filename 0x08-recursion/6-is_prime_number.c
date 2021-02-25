#include "holberton.h"

/**
 * _is_prime_number -  returns 1 or 0 if the input integer is a prime # or not
 *
 * @n: number to check if ti is prime number
 * @cont: number to check if divide to n exactly
 *
 * Return: 1 if n is prime number, 0 if it is not.
 */
int _is_prime_number(int n, int cont)
{
	if (n % cont == 0 || n < 2)
	{
		return (0);
	}
	else if (cont > n / 2)
	{
		return (1);
	}
	return (_is_prime_number(n, cont + 1));
}


/**
 * is_prime_number -  returns 1 or 0 if the input integer is a prime # or not
 *
 * @n: number to check if ti is prime number
 *
 * Return: 1 if n is prime number, 0 if it is not.
 */
int is_prime_number(int n)
{
	return (_is_prime_number(n, 2));
}
