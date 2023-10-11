#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - a function that searches for an integer.
 * @size: size of the array
 * @cmp: pointer to the function you need to use
 * @array: the array
 * Return: success or error
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int search;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (search = 0; search < size; search++)
		{
			if (cmp(array[search]))
			{
				return (search);
			}
		}
	}
	return (-1);
}
