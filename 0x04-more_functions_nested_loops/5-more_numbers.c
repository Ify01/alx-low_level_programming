#include "main.h"

/**
 * more_numbers - printing 10times digits
 * Return: success or error
 */

void more_numbers(void)
{

	int count;
	int values;

	for (count = 0; count < 10; count++)
	{
		for (values = 0; values <= 14; values++)
		{
			if (values > 9)
			{
				_putchar((values / 10) + '0');
			}
				_putchar((values % 10) + '0');
		}
		_putchar('\n');
	}
}
