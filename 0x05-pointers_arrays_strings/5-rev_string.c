#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: the string
 */
void rev_string(char *s)
{
int n = 0;
int i;
char c = s[0];

while (s[n] != '\0')
n++;
for (i = 0; i < n; n++)
n--;
c = s[i];
s[i] = s[n];
s[n] = c;
}
