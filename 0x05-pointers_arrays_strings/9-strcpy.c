#include "main.h"

/**
 * _strcpy - string copying from one to another
 * @dest: the string of the function
 * @scr: the string function
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	char *pointerDest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';
	return (pointerDest);
}
