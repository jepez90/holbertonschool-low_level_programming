#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - prgogram that print operation with parameters pased for the user.
 *
 * @argc: number of elements in argv.
 * @argv: array of arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int (*ptr_func)(int, int);

int i = 0;
	for (; i < argc; i++)
		printf("%s \n", argv[i]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	ptr_func = get_op_func(argv[2]);
	if (ptr_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", ptr_func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
