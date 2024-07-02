#include "main.h"
#include <string.h>

/**
 * puts_half - prints second half of the string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int ln = strlen(str);
	int inx = ln / 2;
	int i = inx;

	if (ln % 2 == 1)
	{
		inx = (ln - 1) / 2;
	}


	while (i < ln)
	{
		_putchar(str[i]);
		++i;
	}
	_putchar('\n');
}
