#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void print_char (va_list);
void print_int (va_list);
void print_float (va_list);
void print_string(va_list);

/**
 * print_all - Function that prints anything.
 *
 * @format: char to be printen between the strings in va_list
 *
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	int index_format = 0, printed_sp = 0;
	va_list arg_list;

	if (format == NULL)
		return;

	va_start(arg_list, format);

		while (format[index_format])
		{
			switch (printed_sp)
			{
				case 1:
					printf(", ");
					break;
				default:
					printed_sp = 1;
			}

			switch (format[index_format])
			{
				case 'c':
					print_char(arg_list);
					break;
				case 'i':
					print_int(arg_list);
					break;
				case 'f':
					print_float(arg_list);
					break;
				case 's':
					print_string(arg_list);
					break;
				default:
					printed_sp = 0;
			}
			index_format++;
		}

	va_end(arg_list);
	printf("\n");

}

/**
 * print_char - prints char
 *
 * @arg_list: list of parameters
 *
 * Return: nothing.
 */
void print_char (va_list arg_list)
{
	printf("%c", va_arg(arg_list, int));
}

/**
 * print_int - prints an int
 *
 * @arg_list: list of parameters
 *
 * Return: nothing.
 */
void print_int (va_list arg_list)
{
	printf("%d", va_arg(arg_list, int));
}

/**
 * print_float - prints an float
 *
 * @arg_list: list of parameters
 *
 * Return: nothing.
 */
void print_float (va_list arg_list)
{
	printf("%f", va_arg(arg_list, double));
}

/**
 * print_string - prints an string
 *
 * @arg_list: list of parameters
 *
 * Return: nothing.
 */
void print_string(va_list arg_list)
{
	char *ptr_string = va_arg(arg_list, char *);

	if (!ptr_string)
		ptr_string = "(nil)";

	printf("%s", ptr_string);
}
