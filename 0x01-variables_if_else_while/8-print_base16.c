#include <stdio.h>

/**
 * main - printing values and numbers in ascending order
 *
 * Return: Always 0 successful
 */

int main(void)
{
	int asecendingValues = '0';
	int ascendingAlphabets = 'a';

	while (asecendingValues <= '9')
	{
		putchar(asecendingValues);
		asecendingValues += 1;
	}

	while (ascendingAlphabets <= 'f')
	{
		putchar(ascendingAlphabets);
		ascendingAlphabets += 1;
	}

	putchar('\n');
	return (0);
}
