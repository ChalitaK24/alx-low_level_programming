#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * numpr - prints in character
 * @num: input integer
 *
 * Return: void
 */

void numpr(int num)
{
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num / 10)
	{
		numpr(num / 10);
	}
	_putchar((num % 10) + '0');
}

/**
 * print_numbers - prints numbers
 * @n: number of integers passed to the func
 * @separator: string printed between numbers
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i = 0;
	va_list args;

	va_start(args, n);

	while (i < n)
	{
		int num = va_arg(args, int);

		numpr(num);


		if (separator != NULL && i < n - 1)
		{
			const char *sep = separator;

			while (*sep)
			{
				_putchar(*sep++);
			}
		}
		i++;
	}

	_putchar('\n');
	va_end(args);
}
