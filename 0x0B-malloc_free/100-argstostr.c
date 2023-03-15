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
int i, j, k = 0, size = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j])
{
size++;
j++;
}
size++;
}
str = malloc((sizeof(char) * size) +1);
if (str == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j])
{
str[k] = av[i][j];
j++;
k++;
}
str[k] = '\n';
i++;
k++;
}
str[k] = '\0';
return (str);
}
