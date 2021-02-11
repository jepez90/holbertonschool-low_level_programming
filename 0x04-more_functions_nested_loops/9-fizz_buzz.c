#include "holberton.h"
#include <stdio.h>

/**
  * main - check the code for Holberton School students.
  *
  * Return: Always 0.
  */
int main(void)
{
	int counter;

	printf("1");
	for (counter = 2; counter <= 100; counter++)
	{
		printf(" ");
		if (counter % 3 == 0)
			printf("Fizz");
		if (counter % 5 == 0)
			printf("Buzz");
		if (counter % 3 != 0 && counter % 5 != 0)
			printf("%d", counter);

	}
	printf("\n");
	return (0);
}
