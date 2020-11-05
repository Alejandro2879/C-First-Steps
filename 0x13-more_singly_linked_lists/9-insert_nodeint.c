#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: Pointer to the head of the list.
 * @idx: Index or position to insert the node.
 * @n: Date for the element n of the new node.
 * Return: Pointer to the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int iter = 0;
	listint_t *new_node;
	listint_t *current = *head;

	new_node = malloc(sizeof(new_node));
	new_node->n = n;

	if (*head == NULL)
	{
		new_node->next = NULL;
		(*head)->next = new_node;
		return (new_node);
	}
	while (iter < (idx - 1) && current->next)
	{
		current = current->next;
		iter++;
	}
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
