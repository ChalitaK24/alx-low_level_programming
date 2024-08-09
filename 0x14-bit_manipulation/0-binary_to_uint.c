#include "main.h"

/**
 * binary_to_unint - converts binary into unsigned int
 * @b: pointer to string of 0 and 1 chars
 *
 * Return: 0 or num
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int num = 0;


	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		else
		{	num = num * 2;
			num = b[i] - '0';
		}
	}

	return (num);
}
