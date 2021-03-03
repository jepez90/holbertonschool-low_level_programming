#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: first dimension of the array
 * @height: second dimension of the array
 *
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **resultado;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	resultado = malloc(sizeof(int *) * height);
	if (resultado == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		resultado[i] = malloc(sizeof(int) * width);
		if (resultado[i] == NULL)
		{
			while (i--)
				free(resultado[i]);

			free(resultado);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			resultado[i][j] = 0;
	}

	return (resultado);
}

