#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int num1 = 1;
	long int num2 = 1;
	long int sum = 0;

	while (num2 < 4000000)
	{
		if (num2 % 2 == 0)
			sum += num2;

		num2 += num1;
		num1 = num2 - num1;
	}
	printf("%ld\n", sum);
	return (0);
}
