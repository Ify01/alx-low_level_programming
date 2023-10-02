#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 * @argc: arg that prints
 * @argv: arg that prints
 * Return: success or error
 */


int main(int argc, char *argv[])
{
	int printArg;

	for (printArg = 0; printArg < argc; printArg++)
	{
		printf("%s\n", argv[printArg]);
	}
	return (0);
}
