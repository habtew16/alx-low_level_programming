#include "main.h"

/**
* copy_file - Copy the content from one file to another.
* @src_file: The source file from which content is copied.
* @dest_file: The destination file where content is written.
* Return: 0 on success, exit value on failure.
*/
int copy_file(const char *src_file, const char *dest_file)
{
	int fdFrum, fdToo, wrote, readed;
	char buff[1024];

	fdFrum = open(src_file, O_RDONLY);
	if (fdFrum == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
		return (98);
	}
	fdToo = open(dest_file, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdToo == -1)
	{
		close(fdFrum);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
		return (99);
	}

	while ((readed = read(fdFrum, buff, 1024)) > 0)
	{
		wrote = write(fdToo, buff, readed);
		if (wrote == -1)
		{
			close(fdFrum);
			close(fdToo);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
			return (99);
		}
	}
	if (readed == -1)
	{
		close(fdFrum);
		close(fdToo);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
		return (98);
	}
	close(fdFrum);
	close(fdToo);
	return (0);
}


/**
* main - Main entry to copy file's content to another file.
* @ac: Total number of arguments.
* @av: Total array of arguments.
* Return: 0 on success, else exit value on failure.
*/


int main(int ac, char **av)
{
	int result;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	result = copy_file(av[1], av[2]);
	return (result);
}

