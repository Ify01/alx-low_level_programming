#include "main.h"


/**
 * puts2 - printing string picking only the second value
 * @str: the string of the function
 * Return: Always 0.
 */

void puts2(char *str)
{
	int twoStep = 0;

	for (twoStep = 0; str[twoStep] != '\0'; twoStep += 2)
	{
		if (twoStep % 2 == 0)
		{
			_putchar(str[twoStep]);
		}
		
	}
	_putchar('\n');
}
