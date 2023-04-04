#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer h
 *
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
