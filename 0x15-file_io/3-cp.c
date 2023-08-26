#include "main.h"
#include <errno.h>
/**
* copyFile - Copies the content from one file to another.
* @fromPath: Path to the source file.
* @toPath: Path to the destination file.
* Return: 0 on success, -1 on failure.
*/
int copyFile(const char *fromPath, const char *toPath)
{
	int fdFrum, fdToo, wrote, readed;
	char buff[1024];

	fdFrum = open(fromPath, O_RDONLY);
	if (fdFrum == -1)
	{
		return (-1);
	}

	fdToo = open(toPath, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdToo == -1)
	{
		close(fdFrum);
		return (-1);
	}

	while ((readed = read(fdFrum, buff, 1024)) > 0)
	{
		wrote = write(fdToo, buff, readed);
		if (wrote == -1)
		{
			close(fdFrum);
			close(fdToo);
			return (-1);
		}
	}

	if (readed == -1)
	{
		close(fdFrum);
		close(fdToo);
		return (-1);
	}

	if (close(fdFrum) == -1 || close(fdToo) == -1)
	{
		return (-1);
	}

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
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (copyFile(av[1], av[2]) == -1)
	{
		if (errno == EACCES)
		{
			dprintf(STDERR_FILENO, "Error: Permission denied\n");
			exit(99);
		}
		else if (errno == ENOENT)
		{
			dprintf(STDERR_FILENO, "Error: No such file or directory\n");
			exit(98);
		}
		else
		{
			dprintf(STDERR_FILENO, "Error: An error occurred\n");
			exit(100);
		}
	}

	return (0);
}

