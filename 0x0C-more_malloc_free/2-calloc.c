#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @size: allocates memory for an array
 * @nmemb: allocates memory for an array
 * Return: success or error
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t memoryArr;
	void *arrPtr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	memoryArr = nmemb * size;

	arrPtr = malloc(memoryArr);

	if (arrPtr == NULL)
	{
		return (NULL);
	}
	memset(arrPtr, 0, memoryArr);
	return (arrPtr);
}
