#include "lists.h"

/**
 * listint_len - Return the length of a linked list.
 * @h: Pointer of the head of the list.
 * Return: Number of nodes in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	if (!h)
		return ('\0');
	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
