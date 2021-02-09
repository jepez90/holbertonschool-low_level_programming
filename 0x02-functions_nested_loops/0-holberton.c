#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point - write holberton
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char txt[] = "Holberton";
	int i = 0;

	for (; i < 9 ; i++)
		_putchar(txt[i]);

	_putchar(10);
	return (0);
}


