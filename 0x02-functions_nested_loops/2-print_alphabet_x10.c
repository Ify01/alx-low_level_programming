#include "main.h"

/**
 * print_alphabet_x10 - print ten times values
 * Return: 0 Success
 */

void print_alphabet_x10(void)
{
	int tenTimesVal = 'a';
	int tenTimesNum = 1;

	for (tenTimesNum = 1; tenTimesNum <= 10; tenTimesNum++)
	{
		for (tenTimesVal = 'a'; tenTimesVal <= 'z'; tenTimesVal++)
		{
			_putchar(tenTimesVal);
		}

		_putchar('\n');
	}
}

