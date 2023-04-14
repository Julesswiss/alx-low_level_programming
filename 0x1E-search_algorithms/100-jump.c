#include "search_algos.h"

/**
  * print_array_element - Prints the array element being checked.
  * @index: The index of the array element being checked.
  * @value: The value of the array element being checked.
  */
void print_array_element(size_t index, int value)
{
	printf("Value checked array[%lu] = [%d]\n", index, value);
}

/**
  * jump_search_step - Finds the jump step for jump search.
  * @size: The size of the array being searched.
  *
  * Return: The jump step.
  */
size_t jump_search_step(size_t size)
{
	size_t step = sqrt(size);

	printf("Value checked array[%lu] = [%d]\n", step, array[step]);
	while (step < size && array[step] < value)
	{
		step += step;
		if (step < size)
			printf("Value checked array[%lu] = [%d]\n", step, array[step]);
	}

	return (step);
}

/**
  * jump_search_search - Searches for a value in a sorted array of integers
  *                      using jump search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  * @start: The starting index for the search.
  * @end: The ending index for the search.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index of the first occurrence of the value.
  */
int jump_search_search(int *array, size_t size, int value, size_t start, size_t end)
{
	size_t i;

	for (i = start; i <= end && array[i] < value; i++)
		print_array_element(i, array[i]);
	print_array_element(i, array[i]);

	if (i > end || array[i] > value)
		return (-1);

	return (i);
}

/**
  * jump_search - Searches for a value in a sorted array of integers
  *               using jump search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index of the first occurrence of the value.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t start = 0, end, step;

	if (array == NULL || size == 0)
		return (-1);

	step = jump_search_step(size);
	while (start < size && array[start] <= value)
	{
		end = (start + step) < size ? (start + step) : size - 1;
		printf("Value found between indexes [%lu] and [%lu]\n", start, end);
		if (array[start] <= value && array[end]

