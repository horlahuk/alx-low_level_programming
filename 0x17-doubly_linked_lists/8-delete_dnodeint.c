#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a list
 * @head: head of the linked list
 * @index: index of node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp = *head;
	dlistint_t *next;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	for (i = 0; temp != NULL && i < index - 1; i++)
		temp = temp->next;
	if (temp == NULL || temp->next == NULL)
		return (-1);
	next = temp->next->next;
	free(temp->next);
	if (next != NULL)
		next->prev = temp;

	return (1);
}
