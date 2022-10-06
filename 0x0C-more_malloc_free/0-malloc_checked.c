#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocated memory using the malloc function
 * @b: Amount of bytes for type to be allocated memory
 *
 * Return: a pointer to the allocated memory.
 * If malloc fails status value should equal 98.
 */
void *malloc_checked(unsigned int b)
{
	char *M

	M = malloc(b);
	if (M == NULL)
		exit(98);
	return (M);
}
