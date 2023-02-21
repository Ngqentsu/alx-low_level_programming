#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the passed integer
 * Return: Always 0.
 */
int main(void)
{
int i = n % 10;
if (n < 0)
i = -n;
_putchar(i + '0');
return (0);
}
