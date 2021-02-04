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
	int i;

	for (n = 48; n < 58; n++)
	{
		for (i = 48; i < 58; i++)
		{
			if (n + i != 96)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(n);
			putchar(i);
		}
	}
	putchar(10);
	return (0);
}


