#include "holberton.h"

/**
 * leet -  encodes a string into 1337.
 *
 * @str: pointer to array of chars.
 *
 * Return: pointer to str.
 */
char *leet(char *str)
{
	char que_reemplazar[] = "oOlLeEaAtT";
	char reemplazar_con[] = "0011334477";
	int i = 0;
	int j;

	for (; *(str + i) != '\0'; i++)
		for (j = 0; j < 10; j++)
			if (*(str + i) == que_reemplazar[j])
				*(str + i) = reemplazar_con[j];

	return (str);
}
