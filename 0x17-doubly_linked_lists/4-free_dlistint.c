#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - Free a linked list.
 * @head: Pointer to the head of the list.
 * Return: No return.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *cont;

	if (!head)
		return;
	while (head)
	{
		cont = head, head = head->next, free(cont);
	}
}
