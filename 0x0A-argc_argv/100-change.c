#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of coins
 * @argc: arg that prints
 * @argv: arg that prints
 * Return: success or error
 */

int main(int argc, char *argv[])
{
	int argCoins;
	int argChange;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	argCoins = atoi(argv[1]);
	argChange = 0;

	while (argCoins > 0)
	{
		if (argCoins >= 25)
		{
			argCoins -= 25;
		}
		else if (argCoins >= 10)
		{
			argCoins -= 10;
		}
		else if (argCoins >= 5)
		{
			argCoins -= 5;
		}
		else if (argCoins >= 2)
		{
			argCoins -= 2;
		}
		else if (argCoins >= 1)
		{
			argCoins -= 1;
		}
		argChange += 1;
	}
	printf("%d\n", argChange);
	return (0);
}
