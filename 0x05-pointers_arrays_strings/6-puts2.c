#include "main.h"

/**
 * puts2 - pritns every other character of a string
 *
 * @str: character string
 * Return: void
 */

void puts2(char *str)
{
	int n = 0;

	while (str[n] != '\0' && str[n] != '\\')
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
		n++;
	}
	_putchar('\n');
}
