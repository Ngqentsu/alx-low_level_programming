#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times of _
 */
void print_line(int n)
{
int i;
for (i = 0; i <= 9; i++)
{
if (|( i == '2' || i == '4'))
_putchar(i);
}
_putchar('\n');
}
