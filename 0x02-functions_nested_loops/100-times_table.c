#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 *@n: the number for times tables
 */
void print_times_table(int n)
{
int i, j, k;
if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
_putchar('0');
for (j = 1; j <= n; j++)
{
_putchar(',');
_putchar(' ');
k = i * j;
if (k <= n)
_putchar(' ');
else
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
}
_putchar('\n');
}
}
}
