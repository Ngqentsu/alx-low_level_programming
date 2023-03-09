#include "main.h"

/**
 * _puts_recursion - prints the string
 * @s: the pointer to the string
 */
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
