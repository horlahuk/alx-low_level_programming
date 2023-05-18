#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head of the linked list
 * @idx: index
 * @n: data to be inserted
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int count = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (temp != NULL)
	{
		if (count == idx - 1)
		{
			if (temp->next == NULL)
				return (add_dnodeint_end(h, n));

			new = malloc(sizeof(dlistint_t));

			if (new == NULL)
				return (NULL);

			new->n = n;
			new->next = temp->next;
			new->prev = temp;
			temp->next->prev = new;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
		count++;
	}
	return (NULL);
}
