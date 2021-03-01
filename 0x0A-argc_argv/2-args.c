#include <stdio.h>

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
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

