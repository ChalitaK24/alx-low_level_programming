#include  "main.h"

/**
 * reverse_array - reversing array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j;
	int r;

	while (i < n - 1)
	{
		j = i + 1;
		
		while (j > 0)
		{
			r = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = r;
			j--;
		}
	i++;
	}
}
