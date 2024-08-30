#include "main.h"

/**
 * get_bit - retrieve the value of a bit at a specific
 * index in an unsigned long integer
 *
 * Retrun: 0 or 1
 */

int get_bit(unsigned long int n, unsigned int in)
{
	if (in >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	if (n & (1 << in))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
