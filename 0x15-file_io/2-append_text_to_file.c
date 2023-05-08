#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: A pointer to the file name
 * @text_content: pointer to the string
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int num, op, wrt;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (num = 0; text_content[num];)
num++;
}

op = open(filename, O_WRONLY | O_APPEND);
wrt = write(op, text_content, num);
if (op == -1 || wrt == -1)
return (-1);

close(op);

return (1);
}
