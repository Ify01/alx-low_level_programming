#include <stdio.h>

/**
 * main - printing small alphabet in ascending order
 *
 * Return: Always 0 successfully
 */

int main(void)
{
	int ascendingAlphabets = 'a';

	while (ascendingAlphabets <= 'z')
	{
		putchar(ascendingAlphabets);
		ascendingAlphabets += 1;
	}

	putchar('\n');
	return (0);
}

