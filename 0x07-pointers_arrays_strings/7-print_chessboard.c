#include "main.h"

/**
 * print_chessboard - prints chess board with elements
 *
 * @a: two dimensional sting with 8 rows
 * Returns: void
 *
 */

void print_chessboard(char (*a)[8])
{
	int r;
	int c;

	for (r = 0; r < 8; r++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[r][c]);

		}
		_putchar('\n');
	}
}
