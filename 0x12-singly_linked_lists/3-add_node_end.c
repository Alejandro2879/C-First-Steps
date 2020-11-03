#include "lists.h"

/**
 * add_node_end - Add a node at the end of a single linked list
 * @head: Pointer to the head of the list.
 * @str: String to copy in the new node.
 * Return: Pointer to new node or NULL on fail.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node_end, *last_node = *head;
	int counter = 0;

	new_node_end = malloc(sizeof(new_node_end));
	if (!new_node_end)
		return (0);

	if (!str)
	{
		free(new_node_end);
		return (0);
	}

	while (str[counter])
		counter++;

	new_node_end->len = counter;
	new_node_end->str = strdup(str);
	new_node_end->next = NULL;

	if (*head == NULL)
	{
		*head = new_node_end;
		return (0);
	}

	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = new_node_end;

	return (new_node_end);
}
