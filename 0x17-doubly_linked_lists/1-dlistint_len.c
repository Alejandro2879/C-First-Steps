#include "lists.h"

/**
 * dlistint_len - Print number of nodes in a linked list.
 * @h: Pointer to the head of the list.
 * Return: Number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *cont = h;
	size_t counter;

	if (cont == NULL)
		return (0);

	for (counter = 0; cont; counter++)
	{
		cont = cont->next;
	}
	return (counter);
}
