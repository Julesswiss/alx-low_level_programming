#include "main.h"

/**
 * print_binary - prints the binary representation
 * of a number.
 * @n: unsigned long int.
 *
 * Return: no return.
 */
void print_binary(unsigned long int a)
{
	if (a >> 0)
	{
		if (a >> 1)
			print_binary(a >> 1);
		_putchar((a & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
