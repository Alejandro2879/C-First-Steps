#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a linked list.
 * @head: Pointer to the head of the list.
 * @n: Date for the element n of the structure.
 * Return: Pointer to the new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node_b;

	new_node_b = malloc(sizeof(new_node_b));
	if (!new_node_b)
		return (NULL);

	if (head == NULL)
	{
		new_node_b->n = n;
		new_node_b->next = NULL;
		*head = new_node_b;
	}
	else
	{
		new_node_b->n = n;
		new_node_b->next = *head;
		*head = new_node_b;
	}
	return (new_node_b);
}
