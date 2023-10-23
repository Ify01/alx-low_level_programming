#include "lists.h"

/**
 * listint_len - a function that returns the number of elements.
 * @h: the element
 * Return: success or error
 */



size_t listint_len(const listint_t *h)
{
	size_t allElements = 0;

	allElements = 0;

	while (h != NULL)
	{
		allElements++;
		h = h->next;
	}
	return (allElements);
}
