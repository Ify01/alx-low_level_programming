#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator -  function given as a parameter on each element of an array.
 * @size: size of the array
 * @action: pointer to the function you need to use
 * @array: the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t parameter;

	if (array != NULL && action != NULL)
	{
		for (parameter = 0; parameter < size; parameter++)
		{
			action(array[parameter]);
		}
	}
}
