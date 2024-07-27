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

	va_start(args, format);
	for (i = 0; format && format[i]; i++)
	{
		if (prt)
		{
			printf(", ");
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				prt = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				prt = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				prt = 1;
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
				{
					str = "(nil)";
				}
				printf("%s", str);
				prt = 1;
				break;
			default:
				prt = 0;
				break;
		}
	}
	printf("\n");
	va_end(args);
}
