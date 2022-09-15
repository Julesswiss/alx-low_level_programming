#include "main.h"

/**
 * _isupper - mandate to checks if a character is uppercase
 * @c: input integer value
 * Return: 1 if true that it is an upper case, 0 if false in other case
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
