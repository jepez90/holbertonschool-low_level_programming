#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - prgogram that prints the opcodes of its own main function.
 *
 * @argc: number of elements in argv.
 * @argv: array of arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int (*fmain)(int, char **) = &main;
	int i;
	char *ptr = (char *)fmain;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < atoi(argv[1]); i++)
	{
		if (i != 0)
			printf(" ");

		if (ptr[i] < 0)
			printf("%x",   256  + ptr[i]);
		else
			printf("%x",  ptr[i]);
	}

	printf("\n");

}
