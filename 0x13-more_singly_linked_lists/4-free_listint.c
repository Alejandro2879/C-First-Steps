#include "lists.h"

/**
 * free_listint - Free all nodes in a single linked list.
 * @head: Pointer to the head of the list..
 * Return: No return.
 */

void free_listint(listint_t *head)
{
	listint_t *free_node;

	if (head == NULL)
		free(head);
	else
	{
		while (head)
		{
			free_node = head;
			head = head->next;
			free(free_node);
		}
	}
}
