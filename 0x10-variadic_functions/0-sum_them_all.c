#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns sum of all parameters
 * @n: unsigned integer
 *
 * Return: all_sum or 0
 */


int sum_them_all(const unsigned int n, ...)
{
	int all_sum = 0;
	unsigned int i = 0;
	va_list argts;

	va_start(argts, n);

	if (n == 0)
	{
		return (0);
	}

	while (i < n)
	{
		all_sum = all_sum + va_arg(argts, int);
		i++;
	}

	va_end(argts);

	return (all_sum);
}
