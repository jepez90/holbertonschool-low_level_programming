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
	int str_len;

	if (str == NULL)
		return (NULL);

	for (str_len = 0; *(str + str_len); str_len++)
	{}

	resultado = malloc(sizeof(char) * str_len);
	if (resultado == NULL || str_len == 0)
		return (NULL);

	for (str_len = 0; *(str + str_len); str_len++)
	{
		*(resultado + str_len) = *(str + str_len);
	}
	*(resultado + str_len) = '\0';

	return (resultado);
}
