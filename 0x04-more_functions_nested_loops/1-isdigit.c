#include "main.h"

/**
 * _isdigit - checks if the given parameter is a number between 0 to 9
 * @c: carrier variable or input number
 * Return: 1 if true, number is beween 0 to 9,  0 if false or in other case.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}
	else
	{
		return (0);
	}
}
