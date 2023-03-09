#include "main.h"

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: input number
 * Return: the square root or -1 if n does not have it
 */
int _sqrt_recursion(int n)
{
int sqrt = 0;

if (n == 1)
{
return (1);
}
if (n < 0)
{
return (-1);
}
return (find_sqrt(n, sqrt));
}
