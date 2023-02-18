#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - print the last digit of the number stored in the variable n.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int num;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
num = n % 10;
if (num > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, num);
if (num == 0)
printf("Last digit of %d is %d and is 0\n", n, num);
if (num < 6 && num != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, num);
return (0);
}
