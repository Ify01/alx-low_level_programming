#include "lists.h"

/**
 * insert_nodeint_at_index - a func that inserts a new node at a given position
 * @head: the adding node
 * @idx: the node
 * @n: value
 * Return: success or error
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *addingNode;
	listint_t *node;
	unsigned int y;

	if (head == NULL)
		return (NULL);

	addingNode = malloc(sizeof(listint_t));
	if (addingNode == NULL)
		return (NULL);

	addingNode->n = n;

	if (idx == 0)
	{
		addingNode->next = *head;
		*head = addingNode;
		return (addingNode);
	}

	node = *head;

	for (y = 0; y < idx - 1; y++)
	{
		if (node == NULL)
		{
			free(addingNode);
			return (NULL);
		}
		node = node->next;
	}

	if (node == NULL)
	{
		free(addingNode);
		return (NULL);
	}
	addingNode->next = node->next;
	node->next = addingNode;
	return (addingNode);
}
