#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node.
 * @head: the node.
 * @index: the nth
 * Return: success or error
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nth;

	for (nth = 0; nth < index; nth++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}

	return (head);
}

