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
	int isFinished;

	isFinished = 1;
	n = 97;
	while (isFinished)
	{

		putchar(n);
		putchar(10);

		n++;
		if (n == 91)
			isFinished = 0;
		if (n == 123)
			n = 65;
	}
	return (0);
}


