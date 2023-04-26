#include "main.h"

/**
 * read_textfile - reads text file & prints it to stdout
 *
 * @filename: name of the file to be read
 * @letters: no. of letters to read & print
 *
 * Return: no. of letters read & printed, or 0 if error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t read_bytes, write_bytes;

	buffer = malloc(sizeof(char) * letters);
	read_bytes = (buffer == NULL || filename == NULL) ? 0
		: read(fd = open(filename, O_RDONLY), buffer, letters);

	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	if (read_bytes == -1 || write_bytes == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (write_bytes);
}
