#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - print anything func
 * @format: specifies types of arguments
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, prt = 0;
	char *str;
	const char *separ = "";

	va_start(args, format);
	while (format && format[i])
	{
		if (prt)
		{
			separ = ", ";
		}
		while (format && format[i)
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", separ, va_arg(args, int));
					prt = 1;
					break;
				case 'i':
					printf("%d", separ, va_arg(args, int));
					prt = 1;
					break;
				case 'f':
					printf("%f", separ, va_arg(args, double));
					prt = 1;
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
					{
						str = "(nil)";
					}
					printf("%s", separ, str);
					prt = 1;
					break;
				default:
					i++;
					break;
			}
			i++;
			break;
		}
	}
	printf("\n");
	va_end(args);
}
