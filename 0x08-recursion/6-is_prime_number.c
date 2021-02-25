#include "holberton.h"

/**
 * is_prime_number -  returns 1 or 0 if the input integer is a prime # or not
 *
 * @n: number to check if ti is prime number
 *
 * Return: 1 if n is prime number, 0 if it is not.
 */
int is_prime_number(int n)
{
	static int cont = 2;

		if (n % cont == 0 || n < 2)
		{
			return 0;
		}
		else if (cont > n/2)
		{
			return 1;
		}

	cont++;
	return is_prime_number (n);
}
