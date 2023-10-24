#include "lists.h"

/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: the element
 * Return: success or error
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count;
	const listint_t *current = head;
	const listint_t *temp;

	count = 0;

	while (current != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)current, current->n);
		temp = current;
		current = current->next;

		if (temp <= current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			exit(98);
		}
	}
	return (count);
}
