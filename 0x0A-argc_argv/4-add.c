#include <stdio.h>
#include <stdlib.h>


/**
 * main - a program that prints its name, followed by a new line.
 * @argc: arg that prints
 * @argv: arg that prints
 * Return: success or error
 */


int main(int argc, char *argv[])
{
	int argTotal;
	int argsValues;
	int arg1;
	int arg2;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	argTotal = 0;

	for (arg1 = 1; arg1 < argc; arg1++)
	{
		for (arg2 = 0; argv[arg1][arg2] != '\0'; arg2++)
		{
			if (argv[arg1][arg2] < '0' || argv[arg1][arg2] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		argsValues = atoi(argv[arg1]);
		if (argsValues > 0)
		{
			argTotal += argsValues;
		}
	}
	printf("%d\n", argTotal);
	return (0);
}
