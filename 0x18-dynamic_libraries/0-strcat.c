#include "main.h"

/**
 * _strcat - concatenating two strings.
 * @dest: the string of the function
 * @src: the string of the function
 * Return: success or error
 */

char *_strcat(char *dest, char *src)
{
	char *pointerResult = dest;

	while (*dest)
	{
		dest++;
	}

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (pointerResult);
}
