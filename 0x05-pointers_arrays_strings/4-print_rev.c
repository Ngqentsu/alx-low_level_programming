#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: the string
 * Return: void
 */
void print_rev(char *s)
{
int n;
while (s[n] != '\0')
n++;
{
for (n = n - 1; n >= 0; n--)
_putchar(s[n]);
}
_putchar('\n');
}
