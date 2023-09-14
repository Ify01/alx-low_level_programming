#include "main.h"

/**
 * print_numbers - printingdigits
 * Return: success or error
 */

void print_numbers(void)
{
	int counting  = 0;

	while (counting <= 9)
	{
		_putchar(counting + '0');
		counting++;
	}
	_putchar('\n');
}

