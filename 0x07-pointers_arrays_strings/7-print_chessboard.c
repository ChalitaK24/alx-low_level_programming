#include "main.h"

/**
 * print_chessboard - prints chess board with elements
 *
 *
 * Returns: void
 *
 */

void print_chessboard(char (*a)[8]);
{
	int r;
	int c;

	for (r = 0; r < 8; r++)
	{
		for (c = 0; c < 8; c++)
		{
			printf("%c\t", a[r][c]);
		}
	}
}

