#include "main.h"


/**
 * puts2 - printing string picking only the second value
 * @str: the string of the function
 * Return: Always 0.
 */

void puts2(char *str)
{
	int twoSteps = 0;

	while (str[twoSteps] != '\0')
	{
		_putchar(str[twoSteps]);
		twoSteps = twoSteps + 2;
	}
	_putchar('\n');
}
