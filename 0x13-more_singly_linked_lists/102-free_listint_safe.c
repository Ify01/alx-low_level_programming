#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list
 * @h: the element
 * Return: success or error
 */


size_t free_listint_safe(listint_t **h)
{
	size_t size;
	listint_t *current, *temp;

	size = 0;

	current = *h;

	while (current != NULL)
	{
		size++;
		temp = current;
		current = current->next;
		free(temp);
	}

	*h = NULL;

	return (size);
}
