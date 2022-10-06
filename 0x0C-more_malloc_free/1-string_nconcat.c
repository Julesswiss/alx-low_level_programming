#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes type.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sout;
	unsigned int les1, les2, lesout, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (les1 = 0; s1[les1] != '\0'; les1++)
		;

	for (les2 = 0; s2[les2] != '\0'; les2++)
		;

	if (n > les2)
		n = les2;

	lesout = les1 + n;

	sout = malloc(lesout + 1);

	if (sout == NULL)
		return (NULL);

	for (i = 0; i < lesout; i++)
		if (i < les1)
			sout[i] = s1[i];
		else
			sout[i] = s2[i - les1];
	sout[i] = '\0';

	return (sout);
}
