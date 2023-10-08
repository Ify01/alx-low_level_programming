#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * array_range - a function that creates an array of integers.
 * @min: the minimum values
 * @max: the maximum values
 * Return: success or error
 */

int *array_range(int min, int max)
{
	int size;
	int *arr;
	int value;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	arr = (int *)malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (value = 0; value < size; value++)
	{
		arr[value] = min + value;
	}
	return (arr);
}
