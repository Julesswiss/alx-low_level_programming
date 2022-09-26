#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: source address.(The pointer)
 * @to: target address.(to the char)
 * Return: no return.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
