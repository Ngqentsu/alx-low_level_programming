#include <stdio.h>

/**                                                                                                                                                                     
 * main - program that prints all possible different combinations of two digits                                                                                         
 *                                                                                                                                                                      
 * Return: Always 0 (Success)                                                                                                                                           
 */
int main(void)
{
int num1;
int num2;
int num3 = 0; 

while (num3 < 10)
{
num2 = 0;
while (num2 < 10)
{
num1 = 0;
while (num1 < 10)
{
if (num1 != num2 && num2 != num3 && num3 < num2 && num2 < num1)
{
putchar(num3 + '0');
putchar(num2 + '0');
putchar(num1 + '0');

if (num1 * num2 * num3 != 9 * 8 * 7)
{
putchar(',');
putchar(' ');
}
}
num1++;
}
num2++;
}
num3++;
}
putchar('\n');
return (0);
}
