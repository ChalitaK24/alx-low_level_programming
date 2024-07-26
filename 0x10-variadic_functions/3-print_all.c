#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - print anything func
 * @format: specifies types of arguments
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	char *str;
	const char *sep = "";

	va_start(args, format);

	for (i = 0; format && format[i]; i++)
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;

			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;

			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;

			case 's':
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;

			default:
				continue;
		}

		sep = ", ";
	}

	printf("\n");

	va_end(args);

}
