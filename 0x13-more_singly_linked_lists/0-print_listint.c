#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a singly linked list
 * @h: head 
 * @n: integer stored in the node
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t cnode = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		cnode++;
	}

	return cnode;
}
