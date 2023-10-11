#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - a program that prints the opcodes of its own main function.
 * @programPtr: the main.
 * @num_bytes: the number.
 */

void print_opcodes(unsigned char *programPtr, int num_bytes)
{
	int program;

	for (program = 0; program < num_bytes; program++)
	{
		printf("%02x", programPtr[program]);
		if (program < num_bytes - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}

/**
 * main - a program that prints the opcodes of its own main function.
 * @argc: the arguments.
 * @argv: the arguments.
 * Return: success or error.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int size = atoi(argv[1]);

	if (size <= 0)
	{
		printf("Error\n");
		return (2);
	}
	unsigned char *programPtr = (unsigned char *)main;

	print_opcodes(programPtr, size);

	return (0);
}
