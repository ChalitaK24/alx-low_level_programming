#include "lists.h"

/**
 * list_len -returns the number of elements in a linked list
 *
 *
 * Return:
 */

size_t list_len(const list_t *h)
{
	size_t clst = 0;

	while (h != NULL)
	{
		clst++;
		h = h->next;
	}
	return (clst);
}	
