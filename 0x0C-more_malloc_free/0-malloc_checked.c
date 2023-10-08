#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: the pointer variable
 * Return: success or error
 */


void *malloc_checked(unsigned int b)
{
	void *memoryPtr = malloc(b);

	if (memoryPtr == NULL)
	{
		exit(98);
	}
	return (memoryPtr);
}
