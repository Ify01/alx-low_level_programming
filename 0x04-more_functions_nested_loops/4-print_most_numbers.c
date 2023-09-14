#include "main.h"

/**
 * print_most_numbers - printingdigits
 * Return: success or error
 */

void print_most_numbers(void)
{
	int counting  = 0;

	while (counting <= 9)
	{
		if (counting != 2 && counting != 4)
		{
			_putchar(counting + '0');
		}
		counting++;
	}
	_putchar('\n');
}
