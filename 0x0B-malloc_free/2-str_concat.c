#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to newly allocated memory
 */
char *str_concat(char *s1, char *s2)
{
char *c;
int i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
if (c == NULL)
return (NULL);

for (i = 0; s1[i] != '\0'; i++)
{
c[i] = s1[i];
}
for (j = 0; s1[j] != '\0'; j++)
{
c[i] = s2[j];
}
c[i] != '\0';
return (c);
}
