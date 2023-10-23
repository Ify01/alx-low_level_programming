#include "lists.h"

/**
 * pop_listint -  a function that deletes the head node
 * @head: the deleting node
 * Return: Success or error
 */


int pop_listint(listint_t **head)
{
	int delData;
	listint_t *del;

	delData = 0;

	if (*head == NULL)
	{
		return (0);
	}

	del = *head;
	delData = del->n;
	*head = del->next;
	free(del);

	return (delData);
}
