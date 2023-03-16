#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes from s2
 * Return: pointer to the string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *c;
unsigned int i, j = 0, k = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[j] != '\0')
j++;
while (s2[k] != '\0')
k++;
if (n > k)
n = k;
c = malloc((j + n + 1) * sizeof(char));
if (c == NULL)
return (NULL);
for (i = 0; i < j; i++)
{
c[i] = s1[i];
}
for (; i < (j + n); i++)
{
c[i] = s2[i - j];
}
c[i] = '\0';
return (c);
}
