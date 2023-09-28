#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @str: the string that returns length
 * Return: success or error
 */

int _strlen_recursion(char *str)
{
	if (*str == '\0')
	{
		return 0;
	}

	return 1 + _strlen_recursion(str + 1);
}
