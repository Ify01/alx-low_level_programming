#include "main.h"

/**
 * print_square - hashtag(#) printing
 * @size: size and length of square
 * Return: success or error
 */

void print_square(int size)
{
	int sizeOfSquare;
	int lengthOfSquare;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (sizeOfSquare = 1; sizeOfSquare <= size; sizeOfSquare++)
		{
			for (lengthOfSquare = 1; lengthOfSquare <= size; lengthOfSquare++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

