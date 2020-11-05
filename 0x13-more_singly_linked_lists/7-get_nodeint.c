#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list.
 * @head: Pointer to the head of the list.
 * @index: NIndex of the node to return.
 * Return: Pointer to the node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int iter = 0;
	listint_t *node = head;

	if (!head)
		return (NULL);

	while (iter < index)
	{
		node = node->next;
		iter++;
	}
	return (node);
}
