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
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return ('\0');
}
