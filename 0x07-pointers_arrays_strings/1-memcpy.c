#include "main.h"
/**
 * _memcpy - It copies the memory area of the variable,
 * @dest: destination of the memory area.
 * @src: source of the memory area.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
