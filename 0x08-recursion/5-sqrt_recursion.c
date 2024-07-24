#include "main.h"

/**
 * findx - checks if x is positive and equals n
 * @x: integer number poterntial sqrt n
 *
 * @n: positive int
 * Return: x or -1
 */

int findx(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	else
	{
		return (findx(n, x + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural squre root of a number
 * @n: positive integer
 *
 * Return: sqrt n or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (findx(n, 0));
}
