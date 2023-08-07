#include "main.h"

/**
* create_file - creates a file and writes content to it
* @filename: name of the file to create
* @text_content: content to be written to the file
* Return: returns 1 on success
* else -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
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

