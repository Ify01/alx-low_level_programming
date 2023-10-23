#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: the element
 * Return: success or error
 */



size_t print_listint(const listint_t *h)
{
	size_t allElements = 0;

	allElements = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		allElements++;
	}
	return (allElements);
}
