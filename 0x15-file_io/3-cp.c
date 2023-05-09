#include "main.h"
#include <stdio.h>

/**
 * main - copies the content of a file to another file
 * @argc: The number of arguments
 * @argv: An array of pointers
 * Return: 0 Always (Success)
 */
int main(int argc, char *argv[])
{
char *buffer;
int rd, fd, op, wrt;

if (argc != 3)
{
fprintf(stderr, "Usage: cp file_op file_fd\n");
exit(97);
}

op = open(argv[1], O_RDONLY);
fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
rd = read(op, buffer, 1024);
wrt = write(fd, buffer, rd);
if (op == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}

if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write into file %s\n", argv[1]);
exit(99);
}

buffer = malloc(1024 * sizeof(char));
if (buffer == NULL)
{
dprintf(STDERR_FILENO, "Error: Failed to allocate memory\n");
exit(100);
}

while (rd > 0)
{
if (wrt != rd)
{
dprintf(STDERR_FILENO, "Error: Failed to write to file %s\n", argv[2]);
free(buffer);
exit(99);
}
}

if (rd < 0)
{
dprintf(STDERR_FILENO, "Error: Failed to write to file %s\n", argv[2]);
free(buffer);
exit(98);
}

free(buffer);
close(op);
close(fd);

return (0);
}
