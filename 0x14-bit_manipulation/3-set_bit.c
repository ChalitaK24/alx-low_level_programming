#include "main.h"
/**
 * set_bit - function that sets the value of a bit
 * to 1 at a given index
 * @n: ptr to UL int
 * @in: index of the bit to set to 1
 * Return: 1 success or -1
 */

int set_bit(unsigned long int *n, unsigned int in)
{
	if (in >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	*n = *n | (1 << in);

	return (1);
}
