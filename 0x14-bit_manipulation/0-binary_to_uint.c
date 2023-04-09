#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to the string with 1 or 0 chars.
 * Return: converted number or 0 if one or more chars in b is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int c = 0;
int i = 0;

if (b == NULL)
return (0);

while (b[i] < '0' || b[i] > '1')
{
return (0);
c = 2 * c + (b[i] - '0');
i++;
}
return (c);
}
