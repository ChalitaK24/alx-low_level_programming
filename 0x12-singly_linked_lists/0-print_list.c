#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a list_t list
 *
 *
 * Return: clst
 */

size_t print_list(const list_t *h)
{
	size_t clst = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		clst++;
		 h = h->next;
	}
	return (clst);
}

