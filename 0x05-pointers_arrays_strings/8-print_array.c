#include "main.h"
#include <stdio.h>

/**
 * print_array - printing string in half when the total is zero
 * @a: array
 * @n: elements of arrays to be printed
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int orderlyArray = 0;

	while (orderlyArray < n)
	{
		if (orderlyArray > 0)
		{
			printf(", ");
		}
		printf("%d", a[orderlyArray]);
		orderlyArray++;
	}
	printf("\n");
}
