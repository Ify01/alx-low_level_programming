#include <stdio.h>

/**
 * main - printing numbers in ascending order with commas
 *
 * Return: Always 0 successfully
 */

int main(void)
{
	int orderValues = 0;

	while (orderValues < 10)
	{
		putchar(orderValues + '0');
		if (orderValues != 9)
		{
			putchar(',');
			putchar(' ');
		}
		orderValues++;
	}

	putchar('\n');
	return (0);
}
