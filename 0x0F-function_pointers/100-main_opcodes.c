#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Print opcodes of the given function.
 * @func: Pointer to the function.
 * @size: Number of bytes to print.
 */
void print_opcodes(void *func, int size)
{
	unsigned char *opcodes = (unsigned char *)func;
	int program;

	for (program = 0; program < size; program++)
	{
		printf("%02x", opcodes[program]);

		if (program < size - 1)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
}

/**
 * main - Entry point.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 on success, 1 for incorrect arguments, 2 for negative size.
 */
int main(int argc, char *argv[])
{
	int size;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	size = atoi(argv[1]);

	if (size < 0)
	{
		printf("Error\n");
		return (2);
	}

	void (*print_function)(void *, int) = print_opcodes;

	print_function(print_function, size);

	return (0);
}

