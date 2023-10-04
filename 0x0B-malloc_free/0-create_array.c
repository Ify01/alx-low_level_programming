#include "main.h"
#include <stdlib.h>
/**
 * create_array - func that creates an arr of chars, & init with specific char
 * @c: the char
 * @size: the size
 * Return: success or error
 */


char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *allocatedSize = (char *)malloc((size + 1) * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (allocatedSize == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		allocatedSize[i] = c;
	}

	allocatedSize[size] = '\0';
	return (allocatedSize);
}
