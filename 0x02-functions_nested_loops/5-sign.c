#include "main.h"

/**
 * print_sign - Should declare the function
 * @n: The input number as an integer.
 * Return: 1 if greater, 0 if zero and -1 if less than
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
