#include "main.h"

/**
 * read_textfile - reads text file and prints it to the POSIX std output
 * @filename: pointer to text file name
 * @letters: number of letters
 * Return: letters it could read and print or if filename is NULL return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buff;
ssize_t op, rd, wrt;

if (filename == NULL)
return (0);

op = open(filename, O_RDONLY);
if (op == -1)
return (0);

buff = malloc(sizeof(char) * letters);
if (buff == NULL)
return (0);

rd = read(op, buff, letters);
wrt = write(STDOUT_FILENO, buff, rd);

free(buff);
close(op);
return (wrt);
}
