#include "main.h"

/**
 * main - prints all lowercase letters
 *
 * Return: void
 */

void print_alphabet(void)
{
	int lowerc;

	for (lowerc = 97; lowerc <= 122; lowerc++)
	{
		_putchar(lowerc);
	}
	
	_putchar('\n');
}
