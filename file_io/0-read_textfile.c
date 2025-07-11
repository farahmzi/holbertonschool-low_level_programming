#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file to read
 * @letters: The number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t read_bytes, written_bytes;
char *buffer;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(fd);
return (0);
}
read_bytes = read(fd, buffer, letters);
if (read_bytes == -1)
{
free(buffer);
close(fd);
return (0);
}
written_bytes = write(STDOUT_FILENO, buffer, read_bytes);
free(buffer);
close(fd);
if (written_bytes != read_bytes)
return (0);
return (written_bytes);
}
