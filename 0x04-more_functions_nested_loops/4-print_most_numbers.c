#include "main.h"

/**
 * print_most_numbers - some numbers for 0 to 9
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
		if (i != 50 && i != 52)
			_putchar(i);
	_putchar('\n');
}
