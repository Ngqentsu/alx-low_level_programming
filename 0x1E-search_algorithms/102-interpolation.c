#include "search_algos.h"

/**
 * interpolation_search - Search using Interpolation search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return: -1, if the value is not present or the array is NULL
 *         Otherwise, the first index where the value is located.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, low = 0, high = size - 1;

	if (array == NULL)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		double fraction = (double)(high - low) / (array[high] - array[low]);

		i = low + (fraction * (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			high = i - 1;
		else
			low = i + 1;
	}
	printf("Value checked array[%ld] is out of range\n", i);

	return (-1);
}
