#include "main.h"
#include <stdio.h>


/**
 * print_array - prints first n elements of an arry
 * @a: pointer
 * @n: elements of array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
