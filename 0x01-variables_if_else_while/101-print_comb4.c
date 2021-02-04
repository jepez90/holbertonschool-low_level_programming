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
	int j;
	int iInicial;
	int jInicial;

	iInicial = 48;
	jInicial = 48;
	for (n = 48; n < 58; n++)
	{
		for (i = iInicial; i < 58; i++)
		{
			for (j = jInicial; j < 58; j++)
			{
				if (n != i && i != j)
				{
					if (j != 48)
					{
						putchar(',');
						putchar(' ');
					}
					putchar(n);
					putchar(i);
					putchar(j);
				}
			}
			jInicial++;
		}
		iInicial++;
		jInicial = iInicial;
	}
	putchar(10);
	return (0);
}


