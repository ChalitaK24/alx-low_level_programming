#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: pointer to array of integers
 * @size: number of elements in array
 * @cmp: pointer to a function
 *
 * Return: 1 or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}

	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
