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
size_t i, jump_step;

if (array == NULL || size == 0)
  return (-1);

jump_step = sqrt(size);

for (i = 0; i < size && array[i] < value;)
  {
    printf("Value checked array[%ld] = [%d]\n", i, array[i]);

    i += jump_step;
  }

printf("Value found between indexes [%ld] and [%ld]\n", i - jump_step, i);

while (i > 0 && array[i - 1] < value)
  {
    printf("Value checked array[%ld] = [%d]\n", i - 1, array[i - 1]);
    i--;
  }

printf("Value checked array[%ld] = [%d]\n", i - 1, array[i - 1]);

return (array[i - 1] == value ? (int)(i - 1) : -1);
}
