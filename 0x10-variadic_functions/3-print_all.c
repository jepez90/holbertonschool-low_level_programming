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
	int index_format = 0;
	va_list arg_list;
	int index_opt;

	opt_funct options[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};

	va_start(arg_list, format);

		while (format[index_format])
		{

			index_opt = 0;
			while (index_opt < 4)
			{
				if (options[index_opt].format == format[index_format])
				{

					options[index_opt].function(arg_list);

					printf(", ");
				}
				index_opt++;
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
