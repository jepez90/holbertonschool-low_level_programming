#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

typedef struct
{
	char format;
	void (*function)(va_list arg_list);
} opt_funct;
#endif /* VARIADIC_FUNCTIONS_H */