#include "lists.h"

/**
 * free_listint2 - Free all nodes in a linked list.
 * @head: Pointer to the head of the list.
 * Return: No return.
 */

void free_listint2(listint_t **head)
{
	listint_t *free_node;

	if (*head)
	{
		while (*head)
		{
			free_node = *head;
			*head = (*head)->next;
			free(free_node);
		}
	}
	*head = NULL;
}
