#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
unsigned long fib1 = 0, fib2 = 1, sum;
for (i = 0; i < 50; i++)
{
sum = fib1 + fib2;
printf("%zu", sum);
fib1 = fib2;
sum = fib2;
if (i == 49)
{
printf("\n");
}
else
printf(" , ");
return (0);
}
}
