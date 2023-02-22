#include <stdio.h>

/**
 * main - finds and prints the sum of the Fibonacci even-valued terms
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long i, j, k, sum;

i = 1;
j = 2;
sum = 0;

while (i < 4000000 && (i % 2) == 0)
{
sum = sum + i;
k = i + j;
i = j;
j = k;
}
printf("%zu\n", sum);
return (0);
}
