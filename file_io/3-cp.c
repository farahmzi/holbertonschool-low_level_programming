#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

#define BUF_SIZE 1024

/**
 * print_error - Print error and exit
 * @code: Exit code
 * @format: Error message format
 * @arg: Message argument
 */
void print_error(int code, const char *format, const char *arg)
{
dprintf(STDERR_FILENO, format, arg);
exit(code);
}

/**
 * close_fd - Close file descriptor
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
 * copy_file - Copy content from one file to another
 * @fd_from: Source FD
 * @fd_to: Destination FD
 * @file_from: Source filename
 * @file_to: Destination filename
 */
void copy_file(int fd_from, int fd_to, const char *file_from, const char *file_to)
{
char buffer[BUF_SIZE];
ssize_t r, w;

while ((r = read(fd_from, buffer, BUF_SIZE)) > 0)
{
w = write(fd_to, buffer, r);
if (w == -1 || w != r)
print_error(99, "Error: Can't write to %s\n", file_to);
}
if (r == -1)
print_error(98, "Error: Can't read from file %s\n", file_from);
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
print_error(97, "Usage: cp file_from file_to\n", "");

fd_from = open(av[1], O_RDONLY);
if (fd_from == -1)
print_error(98, "Error: Can't read from file %s\n", av[1]);

fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
close_fd(fd_from);
print_error(99, "Error: Can't write to %s\n", av[2]);
}

copy_file(fd_from, fd_to, av[1], av[2]);

close_fd(fd_from);
close_fd(fd_to);
return (0);
}

