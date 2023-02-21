#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the passed integer
 * Return: Always i.
 */
int print_last_digit(int n)
{
int i = n % 10;
if (n < 0)
n = -n;
_putchar(i + '0');
return (i);
}
