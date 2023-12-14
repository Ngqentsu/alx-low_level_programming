#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array
 *                   of integers using advanced binary search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the first index where the value is located.
 */

int advanced_binary(int *array, size_t size, int value)
{
size_t i, mid;
 
if (array == NULL || size == 0)
return (-1);

printf("Searching in array: ");
for (i = 0; i < size; i++)
{
printf("%d", array[i]);
if (i < size - 1)
printf(", ");
else
printf("\n");
}

mid = (size - 1) / 2;

if (array[mid] == value)
{
if (mid > 0 && array[mid - 1] == value)
return (advanced_binary(array, mid + 1, value));
return (mid);
}

if (array[mid] > value)
return (advanced_binary(array, mid, value));

return (advanced_binary(array + mid + 1, size - mid - 1, value) + mid + 1);
}

