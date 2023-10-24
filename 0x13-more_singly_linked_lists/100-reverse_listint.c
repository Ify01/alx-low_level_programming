#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list
 * @head: the element
 * Return: success or error
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;

	while (current != NULL)
	{
		listint_t *next = current->next;

		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;

	return (*head);
}
