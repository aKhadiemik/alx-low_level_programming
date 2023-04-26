#include "main.h"

/**
 * append_text_to_file - appends text to end of file
 *
 * @filename: name of file
 * @text_content: null terminated string, written to end of file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, write_bytes;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (!filename || fd == -1)
		return (-1);

	len = strlen(text_content);
	write_bytes = write(fd, text_content, len);
	if (!text_content || (len && write_bytes == -1))
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
