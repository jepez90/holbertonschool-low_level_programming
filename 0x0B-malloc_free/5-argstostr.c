#include <stdlib.h>

/**
 * argstostr -  concatenates all the arguments of your program.
 *
 * @ac: number of strings to concat
 * @av: array of strings
 *
 * Return: nothing
 */
char *argstostr(int ac, char **av)
{
	int i, j, rlen = 0;
	char *resultado;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			rlen++;
		}
		rlen++;
	}

	resultado = malloc(sizeof(char) * rlen + 1);
	if (!resultado)
		return (NULL);
	rlen = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			resultado[rlen] = av[i][j];
			rlen++;
		}

		resultado[rlen] = '\n';
		rlen++;
	}

	resultado[rlen] = '\0';

	return (resultado);
}
