#include "main.h"

/**
 * print_diagsums - sum of two diagonals
 *
 * @a: string of square matrix of int
 *
 * Return: void
 *
 */

void print_diagsums(int *a, int size)
{
	int i,j;
	int d1sum = 0;
	int d2sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			d1sum = d1sum + a[i * size + i];
			d2sum = d2sum + a[i * size + (size - 1-i)];
		}
	}
	_putchar(d1sum);
}
