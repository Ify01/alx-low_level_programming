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
	int firstArgs;
	int secondArgs;
	int argResult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	firstArgs = atoi(argv[1]);
	secondArgs = atoi(argv[2]);
	argResult = firstArgs * secondArgs;

	printf("%d\n", argResult);
	return (0);
}
