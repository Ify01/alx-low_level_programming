#include "lists.h"

/**
 * free_dlistint - a function that frees
 * @head: the head
 * Return: sucees or error
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *list;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((list = head) != NULL)
	{
		head = head->next;
		free(list);
	}
}
