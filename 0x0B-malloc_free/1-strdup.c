#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer to char
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
int i, j;
char *c;

if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
c = malloc(sizeof(char) * (i + 1));
if (c == NULL)
return (NULL);
for (j = 0; str[j]; j++)
c[j] = str[j];
return (c);
}
