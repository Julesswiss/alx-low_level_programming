#include "main.h"

/**
 * _strstr - finds and locates the first occurrence of the substring.
 * @needle: The substring to be located in the string haystack.
 * @haystack: entire string to be searched.
 * @needle: substring.
 *
 * Return: If the substring is located,
 * a pointer to the beginning of located substring or
 * NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *haystack;
	char *needle;

	while (*haystack != '\0')
	{
		hstack = haystack;
		ndle = needle;

		while (*haystack != '\0' && *ndle != '\0' && *haystack == *ndle)
		{
			hstack++;
			ndle++;
		}
		if (!*ndle)
			return (hstack);
		haystack = hstack + 1;
	}
	return (0);
}
