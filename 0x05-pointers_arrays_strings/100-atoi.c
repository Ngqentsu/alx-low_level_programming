#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: the string
 * Return: integer
 */
int _atoi(char *s)
{
int n = 0;
int i = 0;
int j = 1;

while ((s[i] < '0' || s[i] > '9') && s[i] != '0')
{
if (s[i] == '-')
j *= -1;
i++;
}
while ((s[i] >= '0' || s[i] <= '9') && s[i] != '0')
{
if (n >= 0)
n = n * 10 - (s[i] - '0');
i++;
}
j *= -1;
return (n * j);
}
