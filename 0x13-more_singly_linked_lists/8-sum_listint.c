#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list.
 * @head: Pointer to the head of the list.
 * Return: The sum of the elements.
 */

int sum_listint(listint_t *head)
{
	listint_t *iter;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head->next)
	{
		iter = head;
		head = head->next;
		sum += head->n;
		free(iter);
	}
	return (sum);
}
