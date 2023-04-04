#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: start of list
 *
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	*head = (*head)->next;

	if (!(*head))
		return (0);
	free(temp);
	return ((*head)->n);
}
