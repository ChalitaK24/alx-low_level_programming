#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - allocates memory
 * @b: specifies the number of bytes to allocate
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *pt = malloc(b);

	if (pt == NULL)
	{
		exit(98);
	}

	return (pt);
}
