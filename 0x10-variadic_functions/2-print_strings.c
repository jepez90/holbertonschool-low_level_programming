#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Function that prints strings, followed by a new line.
 *
 * @separator: char to be printen between the strings in va_list
 * @n: number of elements in va_list
 *
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg_list;
	char *string;

	va_start(arg_list, n);

		for (i = 0; i < n; i++)
		{
			string = va_arg(arg_list, char *);

			if (i && separator)
				printf("%s", separator);

			if (string)
				printf("%s", string);
			else
				printf("(nil)");
		}

	va_end(arg_list);
	printf("\n");

}
