#include "main.h"

/**
 * jack_bauer - print every minute of the day
 *
 *
 * Return: void
 */

void jack_bauer(void)
{
	int h, i, m, s;

	for (h = 48; h <= 50; h++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (m = 48; m <= 53; m++)
			{
				for (s = 48; s <= 57; s++)
				{
					if (h >= 50 && i >= 52)
						break;
					_putchar(h);
					_putchar(i);
					_putchar(58);
					_putchar(m);
					_putchar(s);
					_putchar('\n');

				}
			}
		}
	}
}
