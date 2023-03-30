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
	list_t *current;

	if (h == NULL)
	{
		printf("[0] (nil)");
		return (count);
	}
	
	current = (list_t *)h;

	while (current != NULL)
	{
		printf("[%d] %s", current->len, current->str);
		count++;
		current = current->next;
	}

	printf("\n");
	return (count);
}
