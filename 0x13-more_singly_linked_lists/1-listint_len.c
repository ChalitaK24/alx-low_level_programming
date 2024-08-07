#include "lists.h"

/**
 * listint_len - returns the number of elements in linked list
 * @h: head
 *
 * Return: num
 */

size_t listint_len(const listint_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
