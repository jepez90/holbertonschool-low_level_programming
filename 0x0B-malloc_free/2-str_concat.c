#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings.
 *
 * @s1: String to be concatenated
 * @s2: String to be concatenated
 *
 * Return: pointer to the array
 */
char *str_concat(char *s1, char *s2)
{
	char *resultado;
	int len1, len2;

	if (*s1 == '\0')
		len1 = 1;
	else
		for (len1 = 0; *(s1 + len1) != '\0'; len1++)
		{}

	if (*s2 == '\0')
		len2 = 1;
	else
		for (len2 = 0; *(s2 + len2) != '\0'; len2++)
		{}

	resultado = malloc(sizeof(char) * (len1 + len2 - 1));
	if (resultado == NULL)
		return (NULL);

	for (len1 = 0; *(s1 + len1) != '\0'; len1++)
	{
		*(resultado + len1) = *(s1 + len1);
	}

	for (len2 = 0; *(s2 + len2) != '\0'; len2++)
	{
		*(resultado + len1) = *(s2 + len2);
		len1++;
	}
	*(resultado + len1) = '\0';
	return (resultado);
}
