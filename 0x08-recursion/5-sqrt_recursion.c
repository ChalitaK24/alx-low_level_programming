#include "main.h"

/**
 * _sqrt_recursion - returns the natural squre root of a number
 * @n: input num
 *
 * Return: sqrt n
 */

int isprime(int number) 
{
	int i;
    if (number < 2) 
    {
      	    return 0;
    }

    for (i = 2; i * i <= number; ++i) 
    {
        if (number % i == 0) 
	{
            return 0; 
        }
    }
    return 1;
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}

	if (n > 2 && isprime(n))
	{
		return (-1);
	}

	return (_sqrt_recursionx(n, n / 2));

}

int _sqrt_recursionx(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}

	if (x * x > n)
	{
		return (_sqrt_recursionx(n, (x + n / x) / 2));
	}

	else
	{
		return (_sqrt_recursionx(n, (x + n / x) / 2));
	}
}
