#include "holberton.h"

/**
 * _atoi - convert a string to an integer.
 *
 * @s: pointer to str origen.
 * Return: int of string or 0.
 */
int _atoi(char *s)
{
	int sign = 1;
	int number = 0;

	/*1- analisys sign*/
	while (!('0' <= *s && *s <= '9'))
	{
		if (*s == '-')
			sign *= -1;

		if (*s == '+')
			sign *= +1;

		s++;
	}

	/*2 - extract the number */
	while ('0' <= *s && *s <= '9')
	{
		number = (number * 10) + (*s - '0');
		s++;
	}

	return (number * sign);
}
