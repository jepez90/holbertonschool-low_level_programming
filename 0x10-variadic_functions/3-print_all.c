#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void print_char (va_list);
void print_int (va_list);
void print_float (va_list);
void print_string (va_list);
void (*get_function(char))(va_list);

/**
 * print_all - Function that prints anything.
 *
 * @format: char to be printen between the strings in va_list
 *
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	int index_format = 0, is_printed_space = 0;
	va_list arg_list;

	va_start(arg_list, format);

		while (format[index_format])
		{

			if (get_function(format[index_format]))
			{
				if (is_printed_space)
					printf(", ");

				is_printed_space++;
				(get_function(format[index_format]))(arg_list);
			}
			index_format++;
		}

	va_end(arg_list);
	printf("\n");

}
void (*get_function(char format))(va_list)
{
	int i = 0;
	opt_funct options[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};

	while (i < 4)
	{
		if (options[i].format == format)
			return (options[i].function);
		i++;
	}

	return NULL;

}
void print_char (va_list arg_list)
{
	printf("%c", va_arg(arg_list, int));
}


void print_int (va_list arg_list)
{
	printf("%d", va_arg(arg_list, int));
}

void print_float (va_list arg_list)
{
	printf("%f", va_arg(arg_list, double));
}

void print_string (va_list arg_list)
{
	char *ptr_string = va_arg(arg_list, char *);
	if (!ptr_string)
	ptr_string = "(nil)";
		printf("%s", ptr_string);

}

