#include "search_algos.h"

/**
 * exponential_search - Search using Exponential search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return: -1, if the value is not present or the array is NULL
 *         Otherwise, the first index where the value is located.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);

	return (binary_search(array, i / 2, right, value));
}
