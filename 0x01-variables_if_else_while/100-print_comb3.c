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
	int iInicial;

	iInicial = 48;
	for (n = 48; n < 58; n++)
	{
		for (i = iInicial; i < 58; i++)
		{
			if (n + i != 96)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(n);
			putchar(i);
		}
		iInicial++;
	}
	putchar(10);
	return (0);
}


