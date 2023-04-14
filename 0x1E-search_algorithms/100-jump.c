#include "search_algos.h"
#include <math.h>

/**
 * jump_search -this is a function for jump search algorithm
 * @array: this is a pointer to the first element of the array to search in
 * @size: the size of the array
 * @value: value to search for
 * Return: first index where value is located or -1 if array if val not found
 */

int jump_search(int *array, size_t size, int value)
{
	int jump_size = sqrt(size);
	int l = 0, r = 0, i;

	if (array == NULL || size == 0)
		return (-1);

	while (r < (int)size && array[r] < value)
	{
		printf("Value checked array[%d] = [%d]\n", r, array[r]);
		l = r;
		r += jump_size;
	}

	printf("Value found between just between indexes [%d] and [%d]\n", l, r);
	for (i = l; i <= r && i < (int)size; i++)
	{
		printf("Value checked for array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
