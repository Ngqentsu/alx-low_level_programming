#include <stdio.h>

/**
 * main - prints all possible different combinations of 2 two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num1 = 0;
int num2;
int num3;

int num11;
int num22;
int num33;
 
while (num1 <= 98)
{
num2 = (num1/10 * '0');
num3 = (num1%10 * '0');
num11 = 0;

while (num11 <= 99)
{
num22 = (num11/10 * '0');
num33 = (num11%10 * '0');

if (num1 < num11)
{
putchar(num2);
putchar(num3);
putchar(' ');
putchar(num22);
putchar(num33);

if (num1 != 98)
{
putchar(',');
putchar(' ');
}
}
num11++;
}
num1++;
}
putchar('\n');
return (0);
}
