#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string.
 *
 * @str: pointer to array of chars.
 *
 * Return: pointer to str.
 */
char *cap_string(char *str)
{
	char separadores[] = " \t\n,;.!?\"(){}";
	int i = 0;
	int j;

	for (; *(str + i) != '\0'; i++)
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			if (i == 0)
			{
				*(str) += ('A' - 'a');
			}
			else
			{
				for (j = 0; j < 13; j++)
					if (*(str + i - 1) == separadores[j])
						*(str + i) += ('A' - 'a');
			}
		}

	return (str);
}
