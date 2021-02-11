#include "holberton.h"

/**
 * _isupper - check if a character is uppercase
 *
 * @c: int that represent a char to be tested.
 *
 * Return: 1 if c is uppercase, 0 if otherwise.
 */
int _isupper(int c)
{
	int isUpper = 0;

	if (c >= 'A' && c <= 'Z')
		isUpper = 1;

	return (isUpper);
}
