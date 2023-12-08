#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node
 * @head: the head
 * @index: the index
 * Return: success or error
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int y;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	y = 0;

	while (head != NULL)
	{
		if (y == index)
			break;
		head = head->next;
		y++;
	}

	return (head);
}
