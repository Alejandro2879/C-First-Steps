#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - Add a node at the beginning of a linked list.
 * @head: Pointer to the head.
 * @n: Date for n.
 * Return: Pointer to the new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(new_node));
	if (!new_node)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
		new_node->next = NULL;
		new_node->n = n;
	}
	else
	{
		new_node->n = n;
		(*head)->prev = new_node;
		new_node->next = *head;
		new_node->prev = NULL;
		*head = new_node;
	}
	return (new_node);
}
