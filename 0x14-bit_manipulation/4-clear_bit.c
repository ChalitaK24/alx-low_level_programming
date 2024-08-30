#include "main.h"

/**
 * clear_bit-  function that sets the value of
 * a bit to 0 at a given index
 *
 * @n: pointer to UL value
 * @index: unsinged int value of the index of the bit
 * Return: 1 success or -1 error
 */

int clear_bit(unsigned long int *n, unsigned index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	*n = *n & ~(1 << index);

	return (1);
}
