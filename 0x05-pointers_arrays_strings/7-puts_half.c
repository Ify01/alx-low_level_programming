#include "main.h"
#include <string.h>


/**
 * puts_half - printing string in half when the total is zero
 * @str: the string of the function
 * Return: Always 0.
 */

void puts_half(char *str)
{
	 int l = strlen(str);
	 int s = (l % 2 == 0) ? l / 2 : l / 2 + 1;
	 int i = s;

	 while (str[i] != '\0')
	 {
		_putchar(str[i]);
	       	i++;
	 }
	 _putchar('\n');
}
