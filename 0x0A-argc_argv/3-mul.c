#include <stdio.h>
#include <stdlib.h>
/**
  * main - enter point.
  *
  * @argc: number of arguments passed in call to program
  * @argv: array of arguments
  *
  * Return: 1 always
  */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}

