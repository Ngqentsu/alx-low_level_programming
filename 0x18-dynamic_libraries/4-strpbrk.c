#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: pointer to the string
 * @accept: the bytes in the string
 * Return: pointer to the byte in s or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
int i;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return ('\0');
}
