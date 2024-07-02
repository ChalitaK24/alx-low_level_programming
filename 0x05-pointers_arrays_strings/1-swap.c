#include "main.h"
/**
 * swap_int - swaps the value of two integers
 *
 * @a: pointer
 * @b: pointer
 *
 *
 * Return: 0 success
 */


void swap_int(int *a, int *b)
{
	int m = *a;
	*a = *b;
	*b = m;

	return (0);
}
