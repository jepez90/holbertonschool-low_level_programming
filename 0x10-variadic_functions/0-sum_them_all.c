#include <stdarg.h>

/**
 * sum_them_all - Function that returns the sum of all its parameters.
 *
 * @n: number of elements in va_list
 *
 * Return: sum of the n elements in va_list.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list arg_list;

	va_start(arg_list, n);

		for (i = 0; i < n; i++)
			sum += va_arg(arg_list, int);

	va_end(arg_list);

	return (sum);
}
