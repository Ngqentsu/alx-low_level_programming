#include <stdio.h>

/**
 * main - prints all possible different combinations of 2 two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num1;
int num2 = 0;

int num11;
int num22 = 0;

while (num2 < 10 && num22 < 10)
{
num1 = 0;
num11 = 0;

while (num1 < 10 && num11 < 10)
{
if (num2 != num1 && num2 < num1 && num22 != num11 && num22 < num11)
{
putchar(num2 + '0');
putchar(num1 + '0');
putchar(' ');
putchar(num22 + '0');
putchar(num11 + '0');

if (num1 + num2 != 99 && num11 + num22 != 99)
{
putchar(',');
putchar(' ');
}
}
num1++;
num11++;
}
num2++;
num22++;
}
putchar('\n');
return (0);
}
