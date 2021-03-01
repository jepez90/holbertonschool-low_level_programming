#include <stdio.h>
#include <stdlib.h>
/**
  * main - enter point.
  *
  * @argc: number of arguments passed in call to program
  * @argv: array of arguments
  *
  * Return: 0 if success, or 1 if error
  */
int main(int argc, char *argv[])
{
	int i = 0;
	int cuantasMonedas = 0;
	int sum = 0;
	int monedas[5] = {25, 10, 5, 2, 1};
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
		cents = atoi(argv[1]);

	if (cents < 0)
		printf("0\n");
	else
	{
		for (i = 0; i < 5; i++)
		{
			while (sum + monedas[i] <= cents)
			{
				sum += monedas[i];
				cuantasMonedas++;
			}
		}

		printf("%d\n", cuantasMonedas);

	}

	return (0);

}

