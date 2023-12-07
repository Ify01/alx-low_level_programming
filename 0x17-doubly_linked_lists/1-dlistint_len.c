#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a doubly linked list.
 * @h: Head of the list.
 *
 * Return: The number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int elem;

	elem = 0;

	if (h == NULL)
		return (elem);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		elem++;
		h = h->next;
	}

	return (elem);
}
