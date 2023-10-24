#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list
 * @head: the element
 * Return: success or error
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *loopList = head;
	listint_t *lists = head;

	while (loopList != NULL && lists != NULL && lists->next != NULL)
	{
		loopList = loopList->next;
		lists = lists->next->next;

		if (loopList == lists)
		{
			loopList = head;
			while (loopList != lists)
			{
				loopList = loopList->next;
				lists = lists->next;
			}
			return (loopList);
		}
	}
	return (NULL);
}
