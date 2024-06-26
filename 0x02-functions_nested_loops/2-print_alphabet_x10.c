#include "main.h"

/**
 * print_alphabet_x10 - prints lowercse letters 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int x;

	int lowercase;

	for (x = 0; x < 10; ++x)
	{
		for (lowercase = 97; lowercase <= 122; lowercase++)
		{
			_putchar(lowercase);

		}

	_putchar('\n');
	}
}
