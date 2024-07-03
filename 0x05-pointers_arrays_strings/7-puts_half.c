#include "main.h"
#include <string.h>

/**
 * puts_half - prints second half of the string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int l = strlen(str);
	int in = l / 2;
	int i = in;

	if (l % 2 == 1)
	{
		in = (l - 1) / 2;
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');

}
