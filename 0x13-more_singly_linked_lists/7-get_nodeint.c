#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of listint_t list
 * @head: start of list
 * @index: index of the node
 *
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;

	while (index > 0 && current != NULL)
	{
		index--;
		current = current->next;
	}

	if (index == 0 && current != NULL)
		return (current);

	return (NULL);
}
