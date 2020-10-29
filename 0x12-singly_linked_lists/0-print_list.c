#include "lists.h"
#include <stdio.h>

/**
 * print_list - Print elements of a linked list.
 * @h: Pointer to the list.
 *
 * Return: Number of nodes in the linked list.
 */

size_t print_list(const list_t *h)
{
	size_t iter = 0;

	while (h)
	{
	iter += 1;
	if (!h->str)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);

	h = h->next;
	}
	return (iter);
}
