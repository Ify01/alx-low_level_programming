#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: free
 */

void free_listint2(listint_t **head)
{
	listint_t *freeFunc;

	while (*head != NULL)
	{
		freeFunc = *head;
		*head = (*head)->next;
		free(freeFunc);
	}
}
