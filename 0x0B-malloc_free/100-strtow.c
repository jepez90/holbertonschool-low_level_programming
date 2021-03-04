#include <stdlib.h>

/**
 * strtow - splits a string into words.
 *
 * @str: string to be splited.
 *
 * Return: ponter to array of words
 */
char **strtow(char *str)
{
	int count_p;
	char *s;
	int i, j;

	if (str == NULL || str == "")
		return (NULL);

	for (count_p = 0; str[count_p]; count_p++)
	{
		if (str[count_p] == ' ')
			count_p++;
	}

	s = malloc(sizeof(char *) * count_p + 1);
	if (s == NULL)
		return (NULL);
}
/*
 * 
 *
 * @varName: 
 *
 * Return: void
 */