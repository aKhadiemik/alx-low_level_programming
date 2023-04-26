#include "main.h"

/**
 * create_file - creates a file and writes text content to it
 *
 * @filename: the name of the file to be created
 * @text_content: a null terminated string to be written to the file
 *
 * Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd, len, write_bytes;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
		write_bytes = write(fd, text_content, len);

			if (write_bytes == -1)
			{
				close(fd);
				return (-1);
			}
	}
	close(fd);
	return (1);
}
