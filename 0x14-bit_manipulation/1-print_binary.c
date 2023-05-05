#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
unsigned long int val;
int i, num = 0;

if (num == NULL)
_putchar('0');

for (i = 0; i <= 63; i++)
{
val = n >> i;
if (num)
{
_putchar('0');
num++;
}
else if (val & 1)
_putchar('1');
}
}
