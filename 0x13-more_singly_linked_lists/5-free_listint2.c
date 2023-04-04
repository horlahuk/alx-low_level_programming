#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: start of list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	struct listint_s *temp;

	while (head != NULL)
	{
		temp = head;
		head = NULL;

		free(temp);
	}
}
