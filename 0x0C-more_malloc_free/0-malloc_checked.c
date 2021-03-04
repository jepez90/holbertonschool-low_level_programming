#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc.
 *
 * @b: number of arguments passed in call to program
 *
 * Return: pointer to the array
 */
void *malloc_checked(unsigned int b)
{
	void *resultado;

	resultado = malloc( b);

	if (resultado == NULL)
		exit(98);

	return (resultado);
}
