#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * print_str - prints NULL strings
 * @str: string
 *
 * Return: void
 */

void print_str(const char *str)
{
	if (str == NULL)
	{
		str = "(nil)";
	}

	while (*str)
	{
		_putchar(*str++);
	}
}

/**
 * print_strings - prints strings
 * @n: number of argument
 * @separator: str printed between strings
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);

	while (i < n)
	{
		const char *str = va_arg(args, const char*);

		print_str(str);

		if (separator != NULL && i < n - 1)
		{
			const char *sep = separator;

			while (*sep)
			{
				_putchar(*sep++);
			}
		}
	}
	_putchar('\n');

	va_end(args);
}
