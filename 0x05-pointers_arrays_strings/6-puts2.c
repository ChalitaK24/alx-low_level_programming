#include "main.h"

/**
 * puts2 - pritns every other character of a string
 *
 *
 * Return: void
 */

void puts2(char *str)
{
	int n = 0;
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n += 2;
	}
	_putchar('\n');
}
