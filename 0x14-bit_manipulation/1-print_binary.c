#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
int i, val, num = 0;

while (val)
{
val = sizeof(n) * 8;
if (n & 1L << --val)
{
_putchar('1');
num++;
}
else if (num)
_putchar('0');
}
if (!num)
_putchar('0');
}
