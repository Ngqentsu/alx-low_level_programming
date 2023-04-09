#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index, starting from 0 of the bit you want to get
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > (sizeof(unsigned long int) * 8))
return (-1);

n = n & (1 << index);
return (1);
}
