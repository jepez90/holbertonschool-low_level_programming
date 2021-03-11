#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Function that prints numbers, followed by a new line.
 *
 * @separator: char to be printen between the numbers in va_list
 * @n: number of elements in va_list
 *
 * Return: sum of the n elements in va_list.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg_list;

	va_start(arg_list, n);

		for (i = 0; i < n; i++)
		{
			if (i && separator)
				printf("%s", separator);

			printf("%d", va_arg(arg_list, int));
		}

	va_end(arg_list);

	printf("\n");

}
