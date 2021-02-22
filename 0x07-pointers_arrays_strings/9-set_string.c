#include "holberton.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char.
 *
 * @s: pointer to pointer of string.
 * @to: ointer to be overwrite
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
