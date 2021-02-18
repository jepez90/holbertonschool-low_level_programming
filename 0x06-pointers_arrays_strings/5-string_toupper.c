#include "holberton.h"

/**
 * string_toupper - anges all lowercase letters of a string to uppercase.
 *
 * @str: pointer to array of chars.
 *
 * Return: pointer to *.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
			*(str + i) += ('A' - 'a');
		i++;
	}

	return (str);
}
