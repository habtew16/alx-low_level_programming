#include "main.h"

/**
 * copy_file - Copy the content from one file to another.
 * @src_file: The source file from which content is copied.
 * @dest_file: The destination file where content is written.
 * Return: 0 on success, exit value on failure.
 */


int copy_file(const char *src_file, const char *dest_file)
{
    int fdFrum, fdToo, readed, wrote;
    char buff[1024];

    fdFrum = open(src_file, O_RDONLY);
    if (fdFrum == -1)
    {
        display_error_and_exit(98, src_file);
    }

    fdToo = open(dest_file, O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (fdToo == -1)
    {
        close(fdFrum);
        display_error_and_exit(99, dest_file);
    }

    while ((readed = read(fdFrum, buff, sizeof(buff))) > 0)
    {
        wrote = write(fdToo, buff, readed);
        if (wrote == -1)
        {
            close(fdFrum);
            close(fdToo);
            display_error_and_exit(99, dest_file);
        }
    }

    if (readed == -1)
    {
        close(fdFrum);
        close(fdToo);
        display_error_and_exit(98, src_file);
    }

    close(fdFrum);
    close(fdToo);

    return 0;
}

/**
 * display_error_and_exit - Display error message and exit with the given code.
 * @code: The exit code.
 * @file: The file name or file descriptor to display.
 */
void display_error_and_exit(int code, const char *file)
{
    dprintf(STDERR_FILENO, "Error: ");
    switch (code)
    {
        case 97:
            dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
            break;
        case 98:
            dprintf(STDERR_FILENO, "Can't read from file %s\n", file);
            break;
        case 99:
            dprintf(STDERR_FILENO, "Can't write to file %s\n", file);
            break;
        case 100:
            dprintf(STDERR_FILENO, "Can't close fd %s\n", file);
            break;
        default:
            dprintf(STDERR_FILENO, "Unknown error\n");
            break;
    }
    exit(code);
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
        display_error_and_exit(97, NULL);
    }

    copy_file(av[1], av[2]);

    return 0;
}

