#include "holberton.h"
/**
 * _abs - return the abs (non negative) value of n.
 *
 * @n: integer to be converted in non negative number.
 * Return: 1 if n is > that 0, -1 if n is < that 0, and 0 sif n is equals to 0.
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);

}
