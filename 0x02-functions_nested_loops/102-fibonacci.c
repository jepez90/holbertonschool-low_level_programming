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
	long int counter;

	printf("1");
	for (counter = 1; counter < 50; counter++)
	{
		num2 += num1;
		num1 = num2 - num1;
		printf(", %ld", num2);
	}
	printf("\n");
	return (0);
}
