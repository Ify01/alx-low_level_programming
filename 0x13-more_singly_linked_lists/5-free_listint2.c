#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: free
 */

void free_listint2(listint_t **head)
{
	listint_t *freeFunc;
	listint_t *freeTemp;

	if (head == NULL)
	{
		return;
	}

	freeFunc = *head;

	while (freeFunc != NULL)
	{
		freeTemp = freeFunc;
		freeFunc = freeFunc->next;
		free(freeTemp);
	}

	*head = NULL;
}
