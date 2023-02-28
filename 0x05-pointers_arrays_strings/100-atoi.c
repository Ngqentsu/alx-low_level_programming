#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: the string
 * Return: integer
 */
int _atoi(char *s)
{
int i = 0;
int d = 0;
int n = 0;
int j = 0;

while (s[n] != '\0')
n++;

while (i < len && f == 0)
{
if (s[i] == '-')
++k;
if (s[i] >= '0' && s[i] <= '9')
{
d = s[i] - '0';
if (k % 2)
d = -d;
n = n * 10 + d;
j = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')

break;
j = 0;
}
i++;
}

if (j == 0)
return (0);

return (n);
}
