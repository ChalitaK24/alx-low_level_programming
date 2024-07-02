#include "main.h"

/*
 * print_rev - prints a string in reverse
 *
 *
 * Return: void
 */

void print_rev(char *s)
{
	if (*s)
	{
		print_rev(s + 1);
		_putchar(*s);
	}
}
