#include "main.h"

/**
 * print_triangle - printing triangle
 * @size: the size of triangle
 * Return: success or error
 */

void print_triangle(int size)
{
	int sizeOfTri;
	int lengthOfTri;
	int limitOfTri;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (sizeOfTri = 0; sizeOfTri < size; sizeOfTri++)
		{
			for (lengthOfTri = size - sizeOfTri; lengthOfTri > 1; lengthOfTri--)
			{
				_putchar(' ');

			}
			for (limitOfTri = 0; limitOfTri <= sizeOfTri; limitOfTri++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
