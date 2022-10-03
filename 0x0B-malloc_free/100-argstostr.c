#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument for count.
 * @av: argument for vector.
 *
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *bing;
	int c, i, j, ia;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	bing = malloc((c + 1) * sizeof(char));

	if (bing == NULL)
	{
		free(bing);
		return (NULL);
	}

	for (i = j = ia = 0; ia < c; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			bing[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < c - 1)
			bing[ia] = av[i][j];
	}
	bing[ia] = '\0';

	return (bing);
}


