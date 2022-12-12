#include "main.h"

/**
 * _strlen - should return the length of a string.
 * @s: input string.
 * Return: should be the length of a string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
