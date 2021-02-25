#include "holberton.h"

/**
 * _is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 *
 * @s: Pointer to string
 * @i: poaicion relativa del caracter a compaar
 *
 * Return: 1 if the tring is palindrome or 0 if it isn't.
 */
int _is_palindrome(char *s, int i)
{
	if (i <= 1)
		return (1);

	if (*s == *(s + i))
		return (_is_palindrome(s + 1, i - 2));
	else
		return (0);
}

/**
 * _strlen_recursion - returns the length of a string.
 *
 * @s: Pointer to string
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 *
 * @s: Pointer to string
 *
 * Return: 1 if the tring is palindrome or 0 if it isn't.
 */
int is_palindrome(char *s)
{
	int i = _strlen_recursion(s);

	return (_is_palindrome(s, i - 1));
}

