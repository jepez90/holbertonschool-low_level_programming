#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: String to be copied
 *
 * Return: pointer to the array
 */
char *_strdup(char *str)
{
	char *resultado;
	int str_len, i;

	if (str == NULL)
		return (NULL);

	for (str_len = 0; str[str_len]; str_len++)
	{}
	str_len++;
	resultado = malloc(sizeof(char) * str_len);
	if (resultado == NULL)
		return (NULL);

	for (i = 0; i <= str_len ; i++)
	{
		resultado[i] = str[i];
	}
	resultado[str_len] = '\0';

	return (resultado);
}
