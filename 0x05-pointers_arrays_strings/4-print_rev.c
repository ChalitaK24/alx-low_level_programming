#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int ln = strlen(s);
	int i = ln - 1;

	while (i >= 0)
	{
		_putchar(s[i]);

		--i;
	}
	_putchar('\n');
}
