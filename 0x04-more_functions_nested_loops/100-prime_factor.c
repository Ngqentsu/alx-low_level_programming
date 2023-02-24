#include <stdio.h>

/**
 * main - finds and prints the largest prime factor
 *
 * Return: Always 0.
 */
int main(void)
{
long int i;
long int maxp;
long int n;

n = 612852475143
maxp = -1;

while (n % 2 == 0)
{
maxp = 2;
n /= 2;
} 
for (i = 3; i <= sqrt(n); i = i + 2)
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
