#include "main.h"

/**
 * *_strncpy - copies the string
 * @src: source
 * @dest: destination
 * @n: the number of times
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

while (i < n && dest[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
