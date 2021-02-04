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

	iInicial = 0;
	printComa = 0;
	for (n = 0; n < 100; n++)
	{
		for (i = iInicial; i < 100; i++)
		{
			if (n != i)
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
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
				putchar(' ');
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
			}

		}
		iInicial++;
	}
	putchar(10);
	return (0);
}


