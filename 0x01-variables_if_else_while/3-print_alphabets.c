#include <stdio.h>

/**
 * main - printing small and capital alphabets in same line
 *
 * Return: Always 0 successfully
 */

int main(void)
{
	int countingSmallAlphabets = 'a';
	int countingCapitalAlphabets = 'A';

	while (countingSmallAlphabets <= 'z')
	{
		putchar(countingSmallAlphabets);
		countingSmallAlphabets += 1;
	}

	while (countingCapitalAlphabets <= 'Z')
	{
		putchar(countingCapitalAlphabets);
		countingCapitalAlphabets += 1;
	}

	putchar('\n');
	return (0);
}
