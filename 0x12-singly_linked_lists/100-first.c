#include "lists.h"

/**
 * start_up_print - prints some text before the main function is executed.
 *
 * Return: nothing
 */
void __attribute__ ((constructor)) start_up_print()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
