#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the beginning
 * @head: head
 * @n: value
 * Return: success or error
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add;
	dlistint_t *y;

	add = malloc(sizeof(dlistint_t));
	if (add == NULL)
		return (NULL);

	add->n = n;
	add->prev = NULL;
	y = *head;

	if (y != NULL)
	{
		while (y->prev != NULL)
			y = y->prev;
	}

	add->next = y;

	if (y != NULL)
		y->prev = add;

	*head = add;

	return (add);
}
