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
unsigned int i, j, k, l, size;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

l = 0;
while (s1[l] != '\0')
l++;
k = 0;
while (s2[k] != '\0')
k++;
size = l + k;
c = malloc((sizeof(char) * size) +1);
if (c == NULL)
return (NULL);
i = 0;
for (i = 0; i < l; i++)
{
c[i] = s1[i];
}
j = 0;
while (i <= size)
{
c[i] = s2[j];
i++;
j++;
}
return (c);
}
