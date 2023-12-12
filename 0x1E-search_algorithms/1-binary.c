#include "search_algos.h"

/**
 * binary_search - Searches for value using Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return: -1, if the value is not present or the array is NULL
 *         Otherwise, the index where the value is located.
 */
int binary_search(int *array, size_t size, int value)
{
size_t i, low, mid, high;


	if (array == NULL)
		return (-1);

	for (low = 0, high = size - 1;  low <= high;)
	{
		printf("Searching in array: ");
		for (i = 0; i < size; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}

	return (-1);
}
