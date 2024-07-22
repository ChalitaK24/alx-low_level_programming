#include "main.h"
#include <stdio.h>

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
	int i;
	int d1sum = 0;
	int d2sum = 0;

	for (i = 0; i < size; i++)
	{
		d1sum = d1sum + a[i * size + i];
		d2sum = d2sum + a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", d1sum, d2sum);
}
