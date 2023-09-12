#include "main.h"

/**
 * print_last_digit - printing the last digits
 * @endingNumber: the last digit
 * Return: success or error
 */

int print_last_digit(int endingNumber)
{
	int ending = endingNumber % 10;

	if (endingNumber < 0)
		ending = -ending;
	_putchar(ending + '0');
		return (ending);
}
