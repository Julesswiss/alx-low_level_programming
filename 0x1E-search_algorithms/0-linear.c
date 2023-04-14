#include "search_algos.h"

/**
 * linear_search - the function for linear search of an array
 * @array: pointer to the first element of the array to search in
 * @size: size of the array
 * @value: the value to search for
 * Return: first index where value is located or -1 if value not present
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value that checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
