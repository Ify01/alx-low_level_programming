#include "main.h"
#include <string.h>


/**
 * print_rev - printing string in reberse form
 * @s: the string of the function
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int reverseStringOrder = strlen(s);
	int stringLetter;

	for (stringLetter = reverseStringOrder - 1; stringLetter >= 0; stringLetter--)
	{
		_putchar(s[stringLetter]);
	}
	_putchar('\n');
}

