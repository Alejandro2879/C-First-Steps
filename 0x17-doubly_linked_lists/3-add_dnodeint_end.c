#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - Insert a node at end on a linked list..
 * @head: Pointer to the head of the list.
 * @n: Number for the n date.
 * Return: Pointer to the new node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *cont = *head, *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	if (*head == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		new_node->n = n;
		*head = new_node;
	}
	else
	{
		while (cont->next != NULL)
			cont = cont->next;
		cont->next = new_node;
		new_node->next = NULL;
		new_node->prev = cont;
		new_node->n = n;
	}
	return (new_node);
}
