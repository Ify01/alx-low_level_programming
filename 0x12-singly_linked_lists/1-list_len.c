#include  "lists.h"

/**
 * list_len - func that returns the number of elements in a linked list_t list.
 * @h: the element
 * Return: the number of nodes
 */



size_t list_len(const list_t *h)
{
	size_t element;

	element = 0;

	while (h != NULL)
	{
		element++;
		h = h->next;
	}
	return (element);
}
