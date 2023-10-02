#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 * @argc: arg that prints
 * @argv: arg that prints
 * Return: success or error
 */


int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
