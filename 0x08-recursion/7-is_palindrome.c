#include "holberton.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 *
 * @s: Pointer to string
 *
 * Return: 1 if the tring is palindrome or 0 if it isn't.
 */
int is_palindrome(char *s)
{
	int i;
	char subs[30];

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (i > 0)
			subs[i - 1] = s[i];
	}
	if (i >= 2)
		subs[i - 2] = '\0';

	if (i <= 1)
		return (1);

	if (*s == *(s + i - 1))
	{
		return (is_palindrome(subs));
	}
	else
		return (0);

}
