#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - a function that reads a text file and prints.
 * @filename: text file
 * @letter: the output
 * Return: success or error.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_read;
	ssize_t bytes_written;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	
	if (fd == -1)
		return (0);

	buffer = malloc(letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);

	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(fd);

	if (bytes_written == bytes_read)
		return (bytes_written);
	else
		return (0);
}
