#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

#define BUF_SIZE 1024

/**
 * close_fd - Closes a file descriptor
 * @fd: The file descriptor
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
 * copy_file - Copies content from one file to another
 * @fd_from: Source file descriptor
 * @fd_to: Destination file descriptor
 * @buffer: Buffer to use
 */
void copy_file(int fd_from, int fd_to, char *buffer)
{
ssize_t r, w;

while ((r = read(fd_from, buffer, BUF_SIZE)) > 0)
{
w = write(fd_to, buffer, r);
if (w != r)
{
dprintf(STDERR_FILENO, "Error: Can't write to file descriptor\n");
close_fd(fd_from);
close_fd(fd_to);
exit(99);
}
}
if (r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file descriptor\n");
close_fd(fd_from);
close_fd(fd_to);
exit(98);
}
}

/**
 * main - Copies content of one file to another
 * @ac: Argument count
 * @av: Argument vector
 * Return: 0 on success
 */
int main(int ac, char **av)
{
int fd_from, fd_to;
char buffer[BUF_SIZE];

if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

fd_from = open(av[1], O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
exit(98);
}

fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
close_fd(fd_from);
exit(99);
}

copy_file(fd_from, fd_to, buffer);
close_fd(fd_from);
close_fd(fd_to);
return (0);
}

