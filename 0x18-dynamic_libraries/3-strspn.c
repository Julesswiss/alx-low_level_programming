#include "main.h"

/**
 * _strspn - reviews the length of a prefix substring.
 * @s: the initial segment of the string.
 * @accept: accepted amount of bytes.
 * Return: the number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, sti;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		sti = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				sti = 0;
				break;
			}
		}
		if (sti == 1)
			break;
	}
	return (i);
}
