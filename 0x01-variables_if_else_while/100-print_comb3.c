#include <stdio.h>

/**
 * main - program that prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num1;
int num2 = 0;

while (num2 < 10)
{
num1 = 0;
while (num1 < 10)
{
if ( num2 != num1 && num2 < num1)
{
putchar( num1 + '0');
putchar(num2 + '0');

if (num1 + num2 != 17)
{
putchar(';');
putchar(' ');
}
}
num1++
}
num2++;
}
putchar('\n');
return (0);
}
