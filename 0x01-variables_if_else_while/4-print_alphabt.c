#include <stdio.h

/**
 * main - program that prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0 (Success) 
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
putchar(c);
}
putchar('\n');
return (0);
}
