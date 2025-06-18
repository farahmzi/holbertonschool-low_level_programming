#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

#define BUF_SIZE 1024

/**
*close_fd - Safely closes a file descriptor
*@fd: File descriptor to close
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
*copy_file - Copies content from one file to another
*@src: Source file name
*@dest: Destination file name
*/
void copy_file(const char *src, const char *dest)
{
int fd_from, fd_to;
ssize_t r, w;
char buffer[BUF_SIZE];

fd_from = open(src, O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
exit(98);
}

fd_to = open(dest, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
close_fd(fd_from);
exit(99);
}

while ((r = read(fd_from, buffer, BUF_SIZE)) > 0)
{
w = write(fd_to, buffer, r);
if (w != r)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
close_fd(fd_from);
close_fd(fd_to);
exit(99);
}
}

if (r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
close_fd(fd_from);
close_fd(fd_to);
exit(98);
}

close_fd(fd_from);
close_fd(fd_to);
}

/**
*main - Entry point, validates arguments and starts copy
*@ac: Argument count
*@av: Argument vector
*Return: 0 on success, exits on failure
*/
int main(int ac, char **av)
{
if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

copy_file(av[1], av[2]);
return (0);
}

