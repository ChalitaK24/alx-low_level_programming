#include  "main.h"

/**
 * reverse_array -
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int b = 0;
	int z = n - 1;

	while (b < z)
	{
		int swap = a[b];
		a[b] = a[z];
		a[z] = swap;

		b++;
		z++;
	}
}
