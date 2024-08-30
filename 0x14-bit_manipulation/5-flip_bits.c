#include "main.h"

/**
 * flip_bits- returns the number of bits nneded
 * to flip to get from one number to another
 * @n: unsiged int value
 * @m: unsigned int value
 * Return: num
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = n ^ m;
	unsigned int num = 0;

	while (bits)
	{
		num = num + (bits & 1);
		bits = bits >> 1;
	}

	return (num);
}
