#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the beginning
 * @head: head
 * @n: value
 * Return: success or error
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *y;
	dlistint_t *add;

	add = malloc(sizeof(dlistint_t));
	if (add == NULL)
		return (NULL);

	add->n = n;
	add->next = NULL;

	y = *head;

	if (y != NULL)
	{
		while (y->next != NULL)
			y = y->next;
		y->next = add;
	}
	else
	{
		*head = add;
	}

	add->prev = y;

	return (add);
}
