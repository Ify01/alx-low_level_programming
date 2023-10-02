#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line.
 * @argc: arg that prints
 * @argv: arg that prints
 * Return: success or error
 */


int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	else
	{
		printf("void.\n");
	}
	return (0);
}
