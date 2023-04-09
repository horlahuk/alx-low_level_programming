#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX stdout
 * @filename: name of file
 * @letters: numbers of letters to read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t b_read, b_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	b_read = read(fd, buffer, letters);
	close(fd);
	if (b_read == -1)
	{
		free(buffer);
		return (0);
	}

	b_written = write(STDOUT_FILENO, buffer, b_read);
	free(buffer);

	if (b_written != b_read)
		return (0);

	return (b_written);
}
