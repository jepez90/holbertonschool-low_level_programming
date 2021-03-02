#include "holberton.h"
/**
 * infinite_add - hat adds two numbers.
 * @n1: pointer to array of chars.
 * @n2: pointer to array of chars.
 * @r: pointewr to buffer
 * @size_r: size of r
 * Return: pointer to r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1, l2, i, num1, num2, sumaUnitaria = 0;

	for (l1 = 0; n1[l1]; l1++)
	{}
	for (l2 = 0; n2[l2]; l2++)
	{}

	r[size_r] = '\0';
	l1--;
	l2--;
	i = size_r - 1;

	if (l1 >= i || l2 >= i)
		return (0);
	i--;
	while (l1 >= 0 || l2 >= 0)
	{
		num1 = 0;
		num2 = 0;
		if (l1 >= 0)
			num1 = n1[l1] - '0';
		if (l2 >= 0)
			num2 = n2[l2] - '0';

		sumaUnitaria += num1 + num2;
		r[i] = (sumaUnitaria % 10) + '0';
		sumaUnitaria /= 10;
		i--;
		l1--;
		l2--;
	}
	if  (sumaUnitaria != 0)
	{
		if (i < 0)
			return (0);

		r[i] = sumaUnitaria + '0';
	}
	return (r + i);
}
