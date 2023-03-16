#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
int *c;
int i;

if (min > max)
return (NULL);
c = malloc(sizeof(int) * (max - min + 1));
if (c == NULL)
return (NULL);
for (i = 0; min <= max; i++)
c[i] = min++;
return (c);
}
