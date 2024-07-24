#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: integer input
 *
 *
 * Return: 0 or -1
 */

int is_prime_number(int n)
{
	int i = 3;

	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % 2 == 0)
	{
		return (0);
	}


	while (i * i <= n)
	{
		if (n % i == 0)
		{
			return (0);
		}
		i = i + 2;
	}

	return (1);
}
