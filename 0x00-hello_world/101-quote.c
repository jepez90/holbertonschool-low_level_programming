#include <stdio.h>
#include <unistd.h>



/**
* main - Entry point
*
* print the size of any types
* Return: Always 0 (Success)
*/
int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, text, 59);
	return (1);
}

