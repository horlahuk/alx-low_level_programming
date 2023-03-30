#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer h
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
		printf("[%d] %s", h->len, h->str);
		}
		printf("\n");

		h = h->next;
		count++;
	}

	return (count);
}
