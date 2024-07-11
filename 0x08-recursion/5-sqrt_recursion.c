#include "main.h"

/**
 * _sqrt_recursion - returns the natural squre root of a number
 * @n: input num
 *
 * Return:
 */

int _sqrt_recursion(int n)
{
	int x = 0;

	if (n < 0 && x * x > n)
	{
		return (-1);
	}

	if (x * x == n)
	{
		return (x);
	}
	
	return (_sqrt_recursion(x + 1));
}
