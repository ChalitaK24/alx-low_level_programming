#include "function_pointers.h"

/**
 * array_iterator - excutes a func given as parameter
 * on each element of an array
 *
 *
 * Return: pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i = 0;

	while (i < size)
	{
		action(array[i]);
	}
}
