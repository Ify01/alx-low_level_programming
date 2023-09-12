#include "main.h"

/**
 * print_alphabet - printing lowerCase alphabets
 *
 * Return: Always 0 successfully
 */


void print_alphabet(void)
{
	int ascendingValues = 'a';

	while (ascendingValues <= 'z')
	{
		_putchar(ascendingValues);
		ascendingValues += 1;
	}

	_putchar('\n');
}
