#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: start of list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	struct listint_s *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;

		/*free((void *)temp->n);*/
		free(temp);
	}
}
