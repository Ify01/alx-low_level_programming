#include "lists.h"

/**
 * delete_nodeint_at_index -  a function that deletes the node at index
 * @head: the delete node
 * @index: the node
 * Return: success or error
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *delNode, *node;
	unsigned int y;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		node = *head;
		*head = node->next;
		free(node);
		return (1);
	}

	delNode = *head;
	for (y = 0; y < index - 1; y++)
	{
		if (delNode->next == NULL)
		{
			return (-1);
		}
		delNode = delNode->next;
	}

	node = delNode->next;
	if (node == NULL)
	{
		return (-1);
	}

	delNode->next = node->next;
	free(node);

	return (1);
}
