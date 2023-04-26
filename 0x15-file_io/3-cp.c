#include "main.h"

/**
 * main - entry point
 *
 * @argc: no of args
 * @argv: array of args
 *
 * Return: 0
 *
 */

int main(int argc, char **argv)
{
	if (argc != 3)
		dprintf(STDERR_FILENO, "USAGE: cp file_from file_to\n"), exit(97);
	copy_file(argv[1], argv[2]);
	return (0);
}

/**
 * copy_file - copies the contents of one file to another
 *
 * @file_from: the name of the file to be copied from
 * @file_to: the name of the file to be copied to
 *
 * Return: void
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, read_bytes, write_bytes;
	char buf[1024];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to), exit(99);
	}

	while ((read_bytes = read(fd_from, buf, 1024)) > 0)
	{
		write_bytes = write(fd_to, buf, read_bytes);
		if (write_bytes == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to), exit(99);
	}

	if (read_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	if (close(fd_from) == -1 || close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close file descriptors\n"), exit(100);
}
