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
	int isFinished;

	isFinished = 1;
	n = 48;
	while (isFinished)
	{

		putchar(n);

		n++;
		if (n == 103)
			isFinished = 0;
		if (n == 58)
			n = 97;
	}
	putchar(10);
	return (0);
}


