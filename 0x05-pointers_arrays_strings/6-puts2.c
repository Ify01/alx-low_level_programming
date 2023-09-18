#include "main.h"


/**
 * puts2 - printing string picking only the second value
 * @str: the string of the function
 * Return: Always 0.
 */

void puts2(char *str)
{
	int twoStep = 0;

	while (str[twoStep] != '\0')
	{
		_putchar(str[twoStep]);
		twoStep += 2;
	}
	_putchar('\n');
}
