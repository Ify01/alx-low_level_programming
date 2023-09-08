#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - printing the value of positive, negative and zeor with string
 *
 * Return: Always 0 is success
 */

int main(void)
{
	int n;
	int mystery;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	mystery = n % 10;

	if (mystery >= 6)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, mystery);
	}
	else if (mystery > 0 && mystery <= 5)
	{
		printf("Last digit of %d is %d and is less than 6 and not 6\n", n, mystery);
	}
	else if (mystery < 0)
	{
		printf("Last digit of %d id %d and is less then 6 and not 6\n", n, mystery);
	}
	else
	{
		printf("Last digit of %d id %d and is 0\n", n, mystery);
	}

	return (0);
}
