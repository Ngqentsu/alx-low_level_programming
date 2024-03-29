#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: the name of the file to create
 * @text_content: A pointer to string to write
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int num = 0, op, wrt;

if (filename == NULL)
return (-1);

if (text_content == NULL)
text_content = "";

op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (op == -1)
return (-1);

while (text_content[num])
{
num++;
}

wrt = write(op, text_content, num);
if (wrt == -1)
return (-1);

close(op);

return (1);
}
