#include "lists.h"

/**
 * sum_listint - sum all the data(n) of a listint_t list
 * @head: start of the list
 *
 * Return: sum of the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
