#include "lists.h"

/**
 * free_list - Function free a single linked list.
 * @head: Pointer to the first element on the list.
 * Return: No return.
 */

void free_list(list_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}

}
