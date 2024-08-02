#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: ptr to address of head
 * @str: the string to be duplicated
 * Return: NULL or addess 
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_n, *temp;
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
	node_n->next = NULL;

	if (*head == NULL)
	{
		*head = node_n;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = node_n;
	}
	return (node_n);
}
