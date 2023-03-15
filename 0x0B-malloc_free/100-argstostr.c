#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: integer
 * @av: double pointer array
 * Return: pointer to string or NULL
 */
char *argstostr(int ac, char **av)
{
char *str;
int i, j, l = 0, k = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
l++;
}
l += ac;
str = malloc((sizeof(char) * l) +1);
if (str == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[k] = av[i][j];
k++;
}
if (str[k] == '\0')
str[k++] = '\n';
}
return (str);
}
