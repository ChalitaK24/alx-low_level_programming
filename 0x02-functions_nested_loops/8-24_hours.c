#include "main.h"

/**
 * jack_bauer - print every minute of the day
 *
 *
 * Return: void
 */

void jack_bauer(void)
{
	int h, m;
	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar(h);
			_putchar(58);
			_putchar(m);
		}
	}
}

