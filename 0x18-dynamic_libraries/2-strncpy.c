#include "main.h"

/**
 * _strncpy - copying strings randomly.
 * @dest: the string of the function
 * @src: the string of the function
 * @n: bytes check
 * Return: success or error
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *pointerResult = dest;

	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (pointerResult);
}
