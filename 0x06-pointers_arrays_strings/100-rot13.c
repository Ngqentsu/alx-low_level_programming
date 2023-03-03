#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @c: pointer to the string
 * Return: *c
 */
char *rot13(char *c)
{
int i, j;

char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; c[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (c[i] == s1[j])
{
c[i] = s2[j];
}
}
}
return (c);
}
