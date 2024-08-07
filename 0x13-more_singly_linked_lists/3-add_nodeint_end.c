#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of list
 * @head: ptr to pointer to head
 * @n: new node
 *
 * Return: new_n or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_n;
	listint_t *tmp;

	node_n = malloc(sizeof(listint_t));

	if (node_n == NULL)
	{
		return (NULL);
	}

	node_n->n = n;
	node_n->next = NULL;

	if (*head == NULL)
	{
		*head = node_n;
	}
	else
	{
		tmp = *head;

		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}

		tmp->next = node_n;
	}

	return (node_n);
}
