#include "main.h"

/**
 * reverse_array - reversing array in descending order
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: success or error
 */

void reverse_array(int *a, int n)
{
	int ascend = 0;
	int descend = n - 1;

	while (ascend < descend)
	{
		int outputting = a[ascend];
		a[ascend] = a[descend];
		a[descend] = outputting;
	
		ascend++;
		descend--;
	}
}
