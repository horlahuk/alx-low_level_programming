#include "main.h"
#define BUFFER_SIZE 1024

/**
 * main - copy the content of one file to another
 * @argc: number of arg
 * @argv: array of arg
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, close_stat;
	ssize_t b_read, b_write;
	char buf[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((b_read = read(fd_from, buf, BUFFER_SIZE)) > 0)
	{
		b_write = write(fd_to, buf, b_read);

		if (b_write != b_read)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (b_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}

	close_stat = close(fd_from);
	if (close_stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd_from);
		exit(100);
	}

	close_stat = close(fd_to);
	if (close_stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
