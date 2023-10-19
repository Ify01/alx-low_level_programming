#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: the head
 * Return: free list
 */

void free_list(list_t *head)
{
	list_t *lists_free;

	lists_free = head;

	while (lists_free != NULL)
	{
		list_t *next = lists_free->next;

		free(lists_free->str);
		free(lists_free);
		lists_free = next;
	}
}
