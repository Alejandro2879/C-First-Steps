#include "lists.h"

/**
 * add_node - Add a node at the beginning of a single linked list.
 * @head: Pointer to the head node.
 * @str: String to copy in the node.
 * Return: Pointer to new node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int counter = 0;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (0);

	if (!str)
	{
		return (0);
		free(new_node);
	}

	while (str[counter])
		counter++;

	new_node->str = strdup(str);
	new_node->len = counter;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
