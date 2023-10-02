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
	int firstArgs = atoi(argv[1]);
	int secondArgs = atoi(argv[2]);
	int argResult = firstArgs * secondArgs;
	(void)argv;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", argResult);
	}
	return (0);
}
