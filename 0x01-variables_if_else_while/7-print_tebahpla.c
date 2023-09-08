#include <stdio.h>

/**
 * main - printing small alphabet in descending order
 *
 * Return: Always 0 successfully
 */

int main(void)
{
	int descendingAlphabets = 'z';

	while (descendingAlphabets >= 'a')
	{
		putchar(descendingAlphabets);
		descendingAlphabets -= 1;
	}

	putchar('\n');
	return (0);
}

