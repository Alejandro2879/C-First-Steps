#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list.
 * @head: Pointer to the head of the list.
 * Return: The sum of the elements.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *iter = head;

	if (head == NULL)
		return (0);

	while (iter->next)
	{
		iter = iter->next;
		sum += iter->n;
	}
	return (sum);
}
