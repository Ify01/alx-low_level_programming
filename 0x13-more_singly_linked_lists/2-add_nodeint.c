#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning.
 * @head: the adding node
 * @n: the value
 * Return: Success or error
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addingNode;

	addingNode = malloc(sizeof(listint_t));
	if (addingNode == NULL)
	{
		return (NULL);
	}
	addingNode->n = n;
	addingNode->next = *head;

	*head = addingNode;

	return (addingNode);
}
