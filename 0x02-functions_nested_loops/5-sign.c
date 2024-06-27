#include "main.h"

/**
 * print_sign - prints the sign of and integer
 *
 * @n: integer variable
 *
 * Return: 1, 0, -1
 */

int print_sign(int n)
{
	while ((n) > 0)
	{
		_putchar(43);
		n++;
		return (+1);
	}
	while ((n) < 0)
	{
		_putchar(45);
		n--;
		return (-1);
	}
	while (n == 0)
	{
		_putchar(48);
		return (0);
	}
	return (0);
}
