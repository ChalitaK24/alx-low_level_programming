#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: specifies types of arguments
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	const char *ptr = format;
	char *str;
	int prt = 0;

	va_start(args, format);

	while (ptr && *ptr)
	{
		if (*ptr == 'c')
		{
			if (prt)
			{
				printf(", ");
			}
			printf("%c", va_arg(args, int));
			prt = 1;
		}
		else if (*ptr == 'i')
		{
			if (prt)
			{
				printf(", ");
			}
			printf("%d", va_arg(args, int));
			prt = 1;
		}
		else if (*ptr == 'f')
		{
			if (prt)
			{
				printf(", ");
			}
			printf("%f", va_arg(args, double));
			prt = 1;
		}
		else if (*ptr == 's')
		{
			if (prt)
			{
				str = va_arg(args, char *);
			}
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			prt = 1;
		}
		ptr++;
	}

	printf("\n");

	va_end(args);
}
