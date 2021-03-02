#include <stdlib.h>

/**
 * create_array - initializes it with a specific char.
 *
 * @size: number of arguments passed in call to program
 * @c: array of arguments
 *
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *resultado;
	unsigned int i;

	if (size == 0)
		return (NULL);

	resultado = malloc(sizeof(char) * size);
	if (resultado != NULL)
	{
		for (i = 0; i < size; i++)
		{
			*(resultado + i) = c;
		}
}
	return (resultado);
}
