#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t linked list,
 * @head: ptr to address of head of list
 * @str: strong to be duplicates
 *
 * Return: NULL or address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node_n;
	char *strd;

	strd = strdup(str);

	if (strd == NULL)
	{
		return (NULL);
	}

	node_n = malloc(sizeof(list_t));

	if (node_n == NULL)
	{
		free(strd);
		return (NULL);
	}

	node_n->str = strd;
	node_n->len = strlen(strd);
	node_n->next = *head;

	*head = node_n;
	return (node_n);
}

