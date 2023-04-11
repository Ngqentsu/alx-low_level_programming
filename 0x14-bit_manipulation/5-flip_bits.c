#include "main.h"

/**
 * flip_bits - returns number of bits to flip from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i;
unsigned long int x = n ^ m;

while (x)
{
x = x & (x - 1);
i++;
}
return (i);
}
