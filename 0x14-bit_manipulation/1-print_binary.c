#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
unsigned long int val;
int i = 63, num = 0;

if (num == NULL)
_putchar('0');

while (i >= 0)
{
i--;
val = n >> i;
if (val & 1)
{
_putchar('1');
num++;
}
else if (num)
_putchar('0');
}
}
