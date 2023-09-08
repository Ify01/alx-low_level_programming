#include <stdio.h>

/**
 * main - printing numbers that ranges from 0 t 9
 *
 * Return: Always 0 sucessfully
 */

int main(void)
{
	int countingNumbers = 0;

	do {
		printf("%d", countingNumbers);
		countingNumbers += 1;
	} while (countingNumbers <= 9);

	printf("\n");
	return (0);
}
