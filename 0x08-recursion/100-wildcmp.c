#include "holberton.h"

/**
 * wildcmp - compares two strings and returns 1 or 0 if are identicals or not
 *
 * @s1: number to calculate its power
 * @s2: power to be raised x.
 *
 * Return: 1 if s1 = s1, 0 if it is not.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*(s1-1) == *(s2-1) || *(s2-1)=='*')
			return 1;
		else
			return 0;
	}

	if (*s2 == '*'){
		if( *(s2+1) == '*')
		{
			return (wildcmp(s1, s2+1));
		}

		if (*s1 != *(s2 + 1))
		{
			return (wildcmp(s1 + 1, s2));
		}
		else
		{
			return (wildcmp(s1 + 1, s2 + 2));
		}
	}
	else
		if (*s1 == *s2)
			return (wildcmp(s1 + 1, s2 + 1));
		else
			return 0;
}
