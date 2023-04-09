#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to the string with 1 or 0 chars.
 * Return: converted number or 0 if one or more chars in b is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int c = 0;
int i;

if (b == NULL)
return (0);

for (i = 0; b[i] < '0' || b[i] > '1'; i++)
{
return (0);
c = (b[i] - '0');
}
return (c);
}
