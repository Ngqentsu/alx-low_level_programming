#include "search_algos.h"

/**
 * jump_search - Searches for a value using the Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return: -1, if the value is not present or the array is NULL
 *         Otherwise, the first index where the value is located.
 */
int jump_search(int *array, size_t size, int value)
{
size_t jump, prev, i;

if (array == NULL || size == 0)
return (-1);

jump = sqrt(size);
prev = 0;
i = 0;

while (i < size && array[i] < value)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);

prev = i;
i += jump;
}

printf("Value found between indexes [%lu] and [%lu]\n", prev, i - 1);

for (; prev <= i - 1 && prev < size; prev++)
{
printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

if (array[prev] == value)
return (prev);
}

return (-1);
}
