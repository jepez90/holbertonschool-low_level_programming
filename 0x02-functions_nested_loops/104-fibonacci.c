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

	for (counter = 0; counter < 98; counter++)
	{
		if (counter == 0)
			printf("%.0f", num2);
		else
			printf(", %.0f", num2);

		num2 += num1;
		num1 = num2 - num1;
	}
	printf("\n");
	return (0);
}
