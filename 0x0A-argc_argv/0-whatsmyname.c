#include <stdio.h>

/**
 * main - will print its name, followed by a new line.
 * @argc: is the number of command line arguments.
 * @argv: an array that contains the program command line arguments.
 * Return: 0 - zero, success.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
