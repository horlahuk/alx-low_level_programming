#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list
 * @head: head of the linked list
 *
 * Return: sum of all the data (n) of a dlistint_t linked list or 0 if
 * list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
