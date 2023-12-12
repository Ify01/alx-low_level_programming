#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: memory area dest
 * @src: memory area src
 * @n: memory area bytes
 * Return: success or error
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *memoryAreaDest = dest;
	char *memoryAreaSrc = src;

	while (n > 0)
	{
		*memoryAreaDest = *memoryAreaSrc;
		memoryAreaDest++;
		memoryAreaSrc++;
		n--;
	}

	return (dest);
}
