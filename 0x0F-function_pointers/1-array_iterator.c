#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints each array element on a newline
 * @array: arrays to be printed
 * @size: amount of element to print
 * @action: pointer to print in regular or hex
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
