#include <stdio.h>

/**
 * main - using putchar to print numbers from 0 to 9
 *
 * Return: Always 0 successfully
 */

int main(void)
{
	int values = 0;

	while (values <= 9)
	{
		putchar(values + '0');
		values++;
	}

	putchar('\n');
	return (0);
}
