#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: start of the list
 * @index: index of the list
 *
 * Return: 1 if it succeeded and 0 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current;
	listint_t *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	prev = NULL;
	for (i = 0; i < index; i++)
	{
	 	if (current == NULL)
			return (-1);
		prev = current;
		current = current->next;
	}
	
	if (current == NULL)
		return (-1);

	prev->next = current->next;
	free(current);
	return (1);
}
