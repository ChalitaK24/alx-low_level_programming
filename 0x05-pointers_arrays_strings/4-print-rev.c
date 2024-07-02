#include "main.h"

/*
 * print_rev - 
 *
 *
 * Return: 0
 */

void print_rev(char *s)
{
	if (*s)
	{
		print_rev(s + 1);
		_putchar("%c");
	}
