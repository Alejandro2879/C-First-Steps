#include "lists.h"

/**
 * pop_listint - deletes the head node & returns the head node’s data (n).
 * @head: Pointer to the head of the list.
 * Return: Value of the lement n in the node.
 */

int pop_listint(listint_t **head)
{
	listint_t *free_node;
	int element_n;

	if (!(*head))
		return (0);

	free_node = *head;
	*head = (*head)->next;
	element_n = free_node->n;
	free(free_node);
	return (element_n);
}
