#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of a listint_t list
 * @head: start of node
 * @n: integer n
 *
 * Return: the address of the new element or NULL if fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	struct listint_s *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
