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
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}

