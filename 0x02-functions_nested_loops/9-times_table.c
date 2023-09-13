#include "main.h"

/**
 *times_table - multipling numbers in 9 rows and cols
 *Return: success and error
 */

void times_table(void)
{
	int col;
	int row;
	int outcome;

	for (col = 0; col <= 9; col++)
	{
		_putchar('0');

		for (row = 0; row <= 9; row++)
		{
			_putchar(',');
			_putchar(' ');

			outcome = col * row;
			if (outcome <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((outcome / 10) + '0');
			}
			_putchar((outcome % 10) + '0');
		}
		_putchar('\n');
	}
}
