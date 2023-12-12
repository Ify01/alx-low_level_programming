#include "main.h"

/**
 * _strncat - concatenating strings randomly.
 * @dest: the string of the function
 * @src: the string of the function
 * @n: bytes check
 * Return: success or error
 */

char *_strncat(char *dest, char *src, int n)
{
	char *pointerResult = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';

	return (pointerResult);
}
