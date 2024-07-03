#include "main.h"
#include <string.h>

/**
 * puts_half - prints second half of the string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int l = 0;
	int i;

	while (l >= 0 && str[l] != '\0')
	{
		l++;
	}

	if (l % 2 == 1)
		i = l / 2;
	else
		i = (l - 1) / 2;

	for (i++; i < l; i++)

		_putchar(str[i]);

	_putchar('\n');
}
