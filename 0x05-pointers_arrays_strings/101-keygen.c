#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, n, sum;
int pass[100];
sum = 0;

srand(time(NULL));

for (i = 0; i < 100; i++)
{
pass[i] = rand() % 78;
sum += pass[i] + '0';
putchar(pass[i] + '0');

if ((2772 - sum) -'0' < 78)
{
n = 2772 - '0' - sum;
sum += n;
putchar(n + '0');
break;
}
}
return (0);
}
