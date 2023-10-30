#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#define BUFFER_SIZE 1024
/**
 * exit_error - a function that reads a text file and prints.
 * @code: the output
 * @format: a text file
 * @arg:the argument.
 */

void exit_error(int code, const char *format, int arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(code);
}
/**
 * main - the main
 * @argc: arguments.
 * @argv: arguments.
 * Return: success or erro
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[1024];

	if (argc != 3)
	{
		exit_error(97, "Usage: cp file_from file_to\n", 0);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		exit_error(98, "Error: Can't read from file %s\n", 0);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		exit_error(99, "Error: Can't write to file %s\n", 0);
	}

	while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			exit_error(99, "Error: Can't write to file %s\n", 0);
		}
	}

	if (bytes_read == -1)
	{
		exit_error(98, "Error: Can't read from file %s\n", 0);
	}

	if (close(fd_from) == -1)
	{
		exit_error(100, "Error: Can't close fd %d\n", fd_from);
	}

	if (close(fd_to) == -1)
	{
		exit_error(100, "Error: Can't close fd %d\n", fd_to);
	}

	return (0);
}
