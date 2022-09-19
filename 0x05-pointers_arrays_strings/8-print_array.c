#include "main.h"
#include <stdio.h>

/**
 * print_array - should prints n elements of an array of integers.
 * @a: int type for arrays
 * @n: int type for n elements
 * Return: no return 0.
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
