#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list
 * @head: the element
 * Return: success or error
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;
	listint_t *reserve = *head;

	while (reserve != NULL)
	{
		next = reserve->next;
		reserve->next = previous;

		previous = reserve;
		reserve = next;
	}

	*head = previous;

	return (*head);
}
