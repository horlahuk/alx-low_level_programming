#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: start of the list
 * @idx: index
 * @n: value of new node
 * 
 * Return: pointer to the new node
 */
listint_t insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}

	current = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
	}

	if (current == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = current->next;
	current->next = new;

	return (new);
}
