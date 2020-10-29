#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: Pointer to the linked list.
 * Return: Number of elements (nodes).
 */

size_t list_len(const list_t *h)
{
	int counter = 0;

	while (h)
	{
		counter += 1;
		h = h->next;
	}
	return (counter);
}
