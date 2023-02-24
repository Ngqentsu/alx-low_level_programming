#include <stdio.h>

/**
 * main - finds and prints the largest prime factor
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
int maxp;
long int n;

n = 612852475143

for (i = 0; i <= sqrt(n); i = i + 2)
{
while (n % i == 0)
{
maxp = i;
n = n / i;
}
if (n > 2)
{
maxp = n;
}
printf("%d\n", maxp);
return (0);
}
}
