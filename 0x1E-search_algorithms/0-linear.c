#include "search_algos.h"

/**
 * linear_search - array search using linear search method
 * @size: size of the array (number of elements)
 * @array: pointer to first element in array to be searched
 * @value: search value
 *
 * Return: First index where value is located, -1 if not found or array is null
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (size == 0 || array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
