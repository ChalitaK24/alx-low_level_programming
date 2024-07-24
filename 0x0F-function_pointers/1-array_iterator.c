#include "function_pointers.h"

/**
 * array_iterator - excutes a func given as parameter
 * on each element of an array
 * @array: array of integers
 * @size: number of elements in array
 *
 * @action: pointer to a fucntion
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
