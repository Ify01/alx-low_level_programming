#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @str: the string that returns
 * Return: success or error
 */


void _puts_recursion(char *str)
{
	if (*str == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*str);
	_puts_recursion(str + 1);
}
