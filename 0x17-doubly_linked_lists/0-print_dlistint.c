#include "lists.h"

/**
 * print_dlistint - Print elemets in a linked list.
 * @h: pointer to the head of the linked list.
 * Return: Number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *cont = h;
	size_t counter = 0;

	if (cont->next == NULL && cont->prev == NULL)
	{
		return (0);
	}

	for (; cont; counter++)
	{
		printf("%d\n", cont->n);
		cont = cont->next;
	}
	return (counter);
}
