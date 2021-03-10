#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - call back a function
 * @name: pointer to a name of the person
 * @f: function to call
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
