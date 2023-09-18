#include "main.h"
#include <string.h>


/**
 * puts_half - printing string in half when the total is zero
 * @str: the string of the function
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int strLength = strlen(str);
	int divideLength = (strLength % 2 == 0) ? strLength / 2 : strLength / 2 + 1;
	int i;

	for (i = strLength - divideLength; i <= strLength; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
