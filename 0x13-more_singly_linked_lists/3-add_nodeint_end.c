#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end.
 * @head: the adding node
 * @n: the value
 * Return: Success or error
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *addingNode;
	listint_t *new;

	addingNode = malloc(sizeof(listint_t));
	if (addingNode == NULL)
	{
		return (NULL);
	}

	addingNode->n = n;
	addingNode->next = NULL;

	if (*head == NULL)
	{
		*head = addingNode;
	}
	else
	{
		new = *head;
		while (new->next != NULL)
		{
			new = new->next;
		}
		new->next = addingNode;
	}
	return (addingNode);
}
