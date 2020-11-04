#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - Add a node at the end of a single linked list.
 * @head: Pointer to the head of the list.
 * @n: Date of the element n of the structure.
 * Return: Pointer to the new node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node_end;
	listint_t *check_last = *head;

	new_node_end = malloc(sizeof(new_node_end));
	if (!new_node_end)
		return (NULL);

	new_node_end->n = n;
	new_node_end->next = NULL;

	if (*head == NULL)
	{
		*head = new_node_end;
		return (new_node_end);
	}
	while (check_last->next)
		check_last = check_last->next;

	check_last->next = new_node_end;

	return (new_node_end);
}
