#include "main.h"


/**
 * read_textfile - function used to read text file
 * @filename: text file to be read
 * @letters: size of bytes to be read
 * Return: succesfully read letters count
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, count, wrote;
	char *buffer;

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	count = read(fd, buffer, letters);
	if (count == -1)
		return (0);
	wrote = write(STDOUT_FILENO, buffer, count);
	if (wrote == -1)
		return (0);
	if (close(fd) == -1)
		return (0);
	free(buffer);
	return (count);
}
