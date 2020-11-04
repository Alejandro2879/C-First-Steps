#include "lists.h"

/**
 * print_listint - Print all elements of a single linked list.
 * @h: Poiter to the head of the list.
 * Return: Number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	if (h == NULL)
	{
		return ('\0');
	}
	else
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			counter++;
		}
	}
	return (counter);
}
