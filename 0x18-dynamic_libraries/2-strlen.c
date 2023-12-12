#include "main.h"


/**
 * _strlen - check the for the length of a string
 * @s: pointer value a
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int stringLength = 0;

	while (s[stringLength] != '\0')
	{
		stringLength++;
	}
	return (stringLength);
}
