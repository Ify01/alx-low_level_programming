#include "main.h"

/**
 * print_line - dash printing
 * @n: dash
 * Return: success or error
 */

void print_line(int n)
{

	if (n <= 0)
	
		_putchar('\n');
	
	else
	{
		int dash;

		for (dash = 1; dash <= n; dash++)
		
			_putchar('_');
		_putchar('\n');
		
	}
}
