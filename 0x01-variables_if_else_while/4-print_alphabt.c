#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		if (n != 101 && n != 113)
		{
			putchar(n);
			putchar(10);
		}
	}

	return (0);
}


