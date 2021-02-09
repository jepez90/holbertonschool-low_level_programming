#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	double num1 = 1;
	double num2 = 1;
	int counter;

	printf("1");
	for (counter = 1; counter < 98; counter++)
	{
		num2 += num1;
		num1 = num2 - num1;
		printf(", %.0f", num2);
	}
	printf("\n");
	return (0);
}
