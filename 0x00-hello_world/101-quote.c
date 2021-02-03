#include <stdio.h>

/**
* main - Entry point
*
* print the size of any types
* Return: Always 0 (Success)
*/
int main(void)
{
	char texto[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, texto, sizeof(texto));
	return (1);
}
