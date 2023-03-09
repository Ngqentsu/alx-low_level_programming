#include "main.h"

/**
 * is_prime_number - evaluate for a prime number
 * @n: input number
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
int i = 2;

if (n < 2)
{
return (0);
}
if (n == 2)
{
return (1);
}
return (is_prime_number(n, i));
}
