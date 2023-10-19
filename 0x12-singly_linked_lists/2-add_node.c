#include  "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @str: the string
 * @head: the head
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *main_node;

	if (str == NULL)
	{
		return (NULL);
	}

	main_node = malloc(sizeof(list_t));

	if (main_node == NULL)
	{
		return (NULL);
	}

	main_node->str = strdup(str);

	if (main_node->str == NULL)
	{
		free(main_node);
		return (NULL);
	}

	main_node->len = strlen(str);
	main_node->next = *head;
	*head = main_node;

	return (main_node);
}
