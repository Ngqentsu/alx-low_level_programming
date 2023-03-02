#include "main.h"

/**
 * *string_toupper - changes all lowercase letters to uppercase
 * @p: pointer
 * Return: char
 */
char *string_toupper(char *p)
{
int i;

for (i = 0; p[i] != '\0'; i++)
{
if (n[i] >= 'a' && n[i] <= 'z')
{
n[i] = n[i] - 32;
}
}
return (n);
}
