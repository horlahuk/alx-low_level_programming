#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: head of the node
 * @index: index of the node, starting from 0
 *
 * Return: if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
