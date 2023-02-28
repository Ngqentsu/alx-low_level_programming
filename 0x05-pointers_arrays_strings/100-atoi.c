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
int j = 0;
int k = 0;

while (s[n] != '\0')
{
n++;
}
while (i < n && j == 0)
{
if (s[i] == '-')
++k;
if (s[i] >= '0' && s[i] <= '9')
{
if (k % 2)
(s[i] - '0') = -(s[i] - '0');
n = n * 10 - (s[i] - '0');
j = 1;

if ((s[i + 1] < '0' && s[i + 1] > '9')
break;
j = 0;
}
i++;
}
if (j == 0)
return (0);
}
return (n);
}
