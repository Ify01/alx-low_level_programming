#include "main.h"

/**
 * print_diagonal - stroke printing
 * @n: dash
 * Return: success or error
 */

void print_diagonal(int n)
{

	if (n <= 0)

		_putchar('\n');

	else
	{
		int stroke;
		int strokeInner;

		for (stroke = 0; stroke <= n; stroke++)
		{
			for (strokeInner = 0; strokeInner <= stroke; strokeInner++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
