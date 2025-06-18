#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

#define BUF_SIZE 1024

/**
 * close_fd - Closes a file descriptor
 * @fd: File descriptor
 */
void close_fd(int fd)
{
if (close(fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * open_files - Opens source and destination files
 * @file_from: Source file name
 * @file_to: Destination file name
 * @fd_from: Pointer to source file descriptor
 * @fd_to: Pointer to destination file descriptor
 */
void open_files(char *file_from, char *file_to, int *fd_from, int *fd_to)
{
*fd_from = open(file_from, O_RDONLY);
if (*fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
exit(98);
}

*fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (*fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
close_fd(*fd_from);
exit(99);
}
}

/**
 * copy_file - Copies content from source to destination
 * @fd_from: Source file descriptor
 * @fd_to: Destination file descriptor
 * @file_from: Source file name
 * @file_to: Destination file name
 */
void copy_file(int fd_from, int fd_to, char *file_from, char *file_to)
{
ssize_t r, w;
char buffer[BUF_SIZE];

while ((r = read(fd_from, buffer, BUF_SIZE)) > 0)
{
w = write(fd_to, buffer, r);
if (w != r)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
close_fd(fd_from);
close_fd(fd_to);
exit(99);
}
}

if (r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
close_fd(fd_from);
close_fd(fd_to);
exit(98);
}
}

/**
 * main - Entry point
 * @ac: Argument count
 * @av: Argument vector
 * Return: 0 on success
 */
int main(int ac, char **av)
{
int fd_from, fd_to;

if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

open_files(av[1], av[2], &fd_from, &fd_to);
copy_file(fd_from, fd_to, av[1], av[2]);
close_fd(fd_from);
close_fd(fd_to);

return (0);
}

