#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int counter, sum = 0;

	for (counter = 0; counter < 1024; counter++)
	{
		if (counter % 3 == 0 || counter % 5 == 0)
			sum += counter;
	}
	printf("%d\n", sum);

	return (0);
}
