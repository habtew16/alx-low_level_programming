#include "main.h"

/**
* append_text_to_file - Appends text to an existing file.
* @filename: Name of the file to which text is to be appended.
* @text_content: Content to be appended to the file.
* Return: 1 on success
* else -1 on failure.
*/


int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len])
			len++;
		bytes_written = write(fd, text_content, len);
		close(fd);

		return ((bytes_written == len) ? 1 : -1);
	}

	close(fd);
	return (1);
}

