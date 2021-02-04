#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if (n != 48)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(n);
	}
	putchar(10);
	return (0);
}


