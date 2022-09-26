#include "main.h"

/**
 * _strpbrk - searches through a string for any set of bytes.
 * @s: the first string to be searched.
 * @accept: the set of bytes to be searched for.
 *
 * Return: If a set is matched
 * (a pointer to the byte in s that matches one of the
 * bytes in accept), or NULL if no such byte is found or matched
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
