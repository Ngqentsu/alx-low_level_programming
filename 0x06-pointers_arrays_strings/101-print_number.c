#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer
 * Return: void
 */
void print_number(int n)
{
int i;

i = n;

if (n < 0)
{
_putchar('-');
i = -n;
}
else if (i / 10 != 0)
{
print_number(i / 10);
}
_putchar((i % 10) + '0');
}
