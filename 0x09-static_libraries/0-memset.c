#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: memoery area
 * @b: constant byte b
 * @n: memory area n
 * Return: success or error
 */


char *_memset(char *s, char b, unsigned int n)
{
	char *memoryPointer = s;

	while (n > 0)
	{
		*memoryPointer = b;
		memoryPointer++;
		n--;
	}
	return (s);
}
