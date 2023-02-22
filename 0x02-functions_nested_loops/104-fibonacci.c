#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long int i;
unsigned long int a1;
unsigned long int a2;
unsigned long int b1;
unsigned long int b2;

unsigned long int b = 1;
unsigned long int a = 2;
unsigned long int j = 10000000;

printf("%lu", b);

for (i = 0; i < 91; i++)
{
printf("%lu", a);
a += b;
b = a - b;
}
b1 = (b / j);
b2 = (b % j);
a1 = (a / j);
a2 = (a % j);

for (i = 92; i < 99; i++)
{
printf("%lu", a1 +(a/j));
printf("%lu", a2 % j);
a1 = a1 + b1;
b1 = a1 - b1;
a2 = a2 + b2;
b2 = a2 - b2;
}
printf("\n");
return (0);
}
