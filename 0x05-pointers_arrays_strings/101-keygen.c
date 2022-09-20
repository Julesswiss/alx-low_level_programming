#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - functtion to generate p
*Return: 0
*/
int main(void)
{
	srand((unsigned int)time(NULL));
	unsigned int i;
	char pass[30];

	for (i = 0; i < 4; i++)
	pass[3 * i] = '0' + (rand() % 10);
	printf("generated password : %s\n", pass);
	return (0);
}
