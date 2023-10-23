#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data
 * @head: the sums
 * Return: success or error
 */

int sum_listint(listint_t *head)
{
	int dataSum;

	dataSum = 0;

	while (head != NULL)
	{
		dataSum += head->n;
		head = head->next;
	}
	return (dataSum);
}

