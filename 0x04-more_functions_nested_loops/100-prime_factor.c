#include <stdio.h>

/**
  * main - print the largest prime factor of a number.
  *
  * Return: Always 0.
  */
int main(void)
{
	long numero = 612852475143;
	int divisor = 2;
	int maximoDivisor = 2;

	while (numero > 1)
	{
		while (numero % divisor == 0)
		{
			maximoDivisor = divisor;
			numero /= divisor;
		}

		divisor += 1;
	}
	printf("%d\n", maximoDivisor);
	return (0);
}
