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
	int printComa;

	iInicial = 48;
	printComa = 0;
	for (n = 48; n < 58; n++)
	{
		for (i = iInicial; i < 58; i++)
		{
			if (i != n)
			{
				if (printComa)
				{
					putchar(',');
					putchar(' ');
				}
				else
				{
					printComa = 1;
				}
				putchar(n);
				putchar(i);

			}
		}
		iInicial++;
	}
	putchar(10);
	return (0);
}


