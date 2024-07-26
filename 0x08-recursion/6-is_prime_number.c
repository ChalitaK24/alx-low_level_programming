#include "main.h"

/**
 * isprime - checks if a number is prime
 * @n: integer number
 * @i:  divisor
 *
 * Return: not prime 0 or prime 1
 */
int isprime(int n, int i)
{
	int next_i;

	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}

	if (i == 2)
	{
		i = 3;
	}
	else
	{
		next_i = i + 2;
	}

	return (isprime(n, next_i));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: int number
 *
 * Return: prime 1
 */

int is_prime_number(int n)
{
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

	return (isprime(n, 3));
}
