#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @src: source
 * @dest: destination
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
int i;
int j;
for (i = 0; dest[i] != '\0'; i++)
{
for (j = 0; src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
j++;
}
}
(dest[i] = '\0';
return (dest);
}
